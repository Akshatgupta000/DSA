#include <iostream>
#include <stack>
using namespace std;

// Function to calculate factorial of a number
 int factorial(int n) {
   if(n==0 || n==1) return 1;

   return n * factorial(n-1);
}

int main() {
    stack<int> s; // Create a stack to hold integers
    int choice, value;

    do {
        cout << "\n1. Push\n2. Pop\n3. Calculate Factorial\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                cout << value << " pushed onto stack." << endl;
                break;
            case 2:
                if (!s.empty()) {
                    value = s.top();
                    s.pop();
                    cout << value << " popped from stack." << endl;
                } else {
                    cout << "Stack is empty. Cannot pop." << endl;
                }
                break;
            case 3:
                if (!s.empty()) {
                    cout << "Calculating factorials of elements in the stack:" << endl;
                    stack<int> tempStack; // Temporary stack to hold values for processing
                    while (!s.empty()) {
                        int num = s.top();
                        s.pop();
                         int fact = factorial(num);
                        cout << "Factorial of " << num << " is: " << fact << endl;
                        tempStack.push(num); // Push back to original stack
                    }
                    // Restore original stack from temporary stack
                    while (!tempStack.empty()) {
                        s.push(tempStack.top());
                        tempStack.pop();
                    }
                } else {
                    cout << "Stack is empty. Cannot calculate factorial." << endl;
                }
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}