#include <iostream>
#include <stack>

using namespace std;

// Function to calculate factorial
unsigned int factorial(int n) {
    if (n == 0 || n == 1) return 1; // Base case
    return n * factorial(n - 1); // Recursive case
}

int main() {
    stack<int> s; // Create a stack of integers
    int value;

    cout << "Enter positive integers (enter -1 to stop):" << endl;
    while (true) {
        cin >> value;
        if (value == -1) break; // Exit condition
        s.push(value); // Push value onto the stack
    }

    cout << "Calculating factorials of elements in the stack:" << endl;
    while (!s.empty()) {
        int topValue = s.top(); // Get top element
        cout << "Factorial of " << topValue << " is: " << factorial(topValue) << endl;
        s.pop(); // Remove top element from the stack
    }

    return 0;
}