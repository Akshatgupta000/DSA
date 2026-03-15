#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Queue {
private:
    int arr[MAX_SIZE];
    int start;
    int end;

public:
    Queue() {
        start = end = -1; // Initialize start and end
    }

    bool isEmpty() {
        return (start == -1);
    }

    bool isFull() {
        return ((end + 1) % MAX_SIZE == start); // Check for circular overflow
    }

    void push(int x) {
        if (isFull()) {
            cout << "Queue Overflow." << endl;
            return; // Exit if the queue is full
        }
        if (isEmpty()) {
            start = end = 0; // First element being added
        } else {
            end = (end + 1) % MAX_SIZE; // Circular increment
        }
        arr[end] = x; // Add element to the queue
        cout << x << " pushed to queue" << endl;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Empty queue." << endl;
            return -1; // Return an invalid value or handle error
        }
        int poppedValue = arr[start]; // Get the value to pop
        if (start == end) { // If this was the last element
            start = end = -1; // Reset queue
        } else {
            start = (start + 1) % MAX_SIZE; // Circular increment
        }
        return poppedValue; // Return the popped value
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        
        cout << "Queue elements: ";
        
        int i = start;
        while (true) {
            cout << arr[i] << " ";
            if (i == end) break; // Stop when we reach the end
            i = (i + 1) % MAX_SIZE; // Circular increment
        }
        
        cout << endl;
    }
};

int main() {
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    q.display();
    
    cout << q.pop() << " popped from queue" << endl;
    
    q.display();

    return 0;
}