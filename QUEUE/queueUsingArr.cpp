#include <iostream>
using namespace std;

#define MAX_SIZE 100

// push->end will move
// pop->start will move

class Queue {
private:
    int arr[MAX_SIZE];
    int start;
    int end;

public:
    Queue() {
        start = -1;
        end = -1;
    }

    bool isEmpty() {
        return (start == -1);
    }

    bool isFull() {
        return (end == MAX_SIZE - 1);
    }

    void push(int value) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }
        if (isEmpty()) {
            start = 0;
        }
        end++;
        arr[end] = value;
        cout << value << " pushed to queue" << endl;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int popdValue = arr[start];
        if (start >= end) {
            start = end = -1;
        } else {
            start++;
        }
        return popdValue;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = start; i <= end; i++) {
            cout << arr[i] << " ";
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

    cout << q.pop() << " popd from queue" << endl;

    q.display();

    return 0;
}