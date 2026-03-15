#include <iostream>
#include <queue> // Include the queue header
using namespace std;

int main() {
    queue<int> q; // Create a queue of integers
    int choice, value;

    do {
        // Display menu options
        cout << "\nMenu:\n";
        cout << "1. Enqueue (Add)\n";
        cout << "2. Dequeue (Remove)\n";
        cout << "3. Front\n";
        cout << "4. Size\n";
        cout << "5. Check if Empty\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice; // Read user choice

        switch (choice) {
            case 1: // Enqueue
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.push(value);
                cout << value << " added to the queue.\n";
                break;

            case 2: // Dequeue
                if (!q.empty()) {
                    cout << q.front() << " removed from the queue.\n";
                    q.pop();
                } else {
                    cout << "Queue is empty! Cannot dequeue.\n";
                }
                break;

            case 3: // Front
                if (!q.empty()) {
                    cout << "Front element: " << q.front() << "\n";
                } else {
                    cout << "Queue is empty!\n";
                }
                break;

            case 4: // Size
                cout << "Current size of the queue: " << q.size() << "\n";
                break;

            case 5: // Check if Empty
                if (q.empty()) {
                    cout << "Queue is empty.\n";
                } else {
                    cout << "Queue is not empty.\n";
                }
                break;

            case 6: // Exit
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 6); // Continue until user chooses to exit

    return 0;
}