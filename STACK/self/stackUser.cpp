#include <iostream>
using namespace std;
#define MAX 100 // Maximum size of the stack

class Stack {
private:
    int top;
    int arr[MAX];

public:
    Stack() {
        top = -1; // Initialize top to -1 indicating the stack is empty
    }

    void push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        top++;
        arr[top] = x;
        cout << x << " pushed to stack\n";
    }

    int pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return -1; // Return -1 if the stack is empty
        }
        return arr[top--];
    }

    int peek() {
        if (top < 0) {
            cout << "Stack is Empty\n";
            return -1; // Return -1 if the stack is empty
        }
        return arr[top];
    }

    bool isEmpty() {
        return top < 0;
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\nStack Operations:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Check if Empty\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                value = s.pop();
                if (value != -1) {
                    cout << value << " popped from stack\n";
                }
                break;
            case 3:
                value = s.peek();
                if (value != -1) {
                    cout << "Top element is " << value << "\n";
                }
                break;
            case 4:
                if (s.isEmpty()) {
                    cout << "Stack is empty\n";
                } else {
                    cout << "Stack is not empty\n";
                }
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}