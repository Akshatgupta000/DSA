#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    int choice, value;

    do {
        // cout << "\nMenu:\n";
        // cout << "1. Push\n";
        // cout << "2. Pop\n";
        // cout << "3. Top\n";
        // cout << "4. Size\n";
        // cout << "5. Check if Empty\n";
        // cout << "6. Exit\n";
        // cout << "Enter your choice: ";
        // cin >> choice;

        switch (choice) {
            case 1: // Push
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                cout << value << " pushed onto the stack.\n";
                break;

            case 2: // Pop
                if (!s.empty()) {
                    cout << s.top() << " popped from the stack.\n";
                    s.pop();
                } else {
                    cout << "Stack is empty! Cannot pop.\n";
                }
                break;

            case 3: // Top
                if (!s.empty()) {
                    cout << "Top element: " << s.top() << "\n";
                } else {
                    cout << "Stack is empty!\n";
                }
                break;

            case 4: // Size
                cout << "Current size of the stack: " << s.size() << "\n";
                break;

            case 5: // Check if Empty
                if (s.empty()) {
                    cout << "Stack is empty.\n";
                } else {
                    cout << "Stack is not empty.\n";
                }
                break;

            case 6: // Exit
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}