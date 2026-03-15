#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

class Deque {
private:
    Node* front;
    Node* rear;

public:
    Deque() {
        front = nullptr;
        rear = nullptr;
    }

    void insertFront(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = front;
        newNode->prev = nullptr;

        if (front != nullptr) {
            front->prev = newNode;
        }
        front = newNode;

        if (rear == nullptr) {
            rear = newNode;
        }
    }

    void insertRear(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = nullptr;
        newNode->prev = rear;

        if (rear != nullptr) {
            rear->next = newNode;
        }
        rear = newNode;

        if (front == nullptr) {
            front = newNode;
        }
    }

    void deleteFront() {
        if (front == nullptr) {
            cout << "Deque is empty!" << endl;
            return;
        }

        Node* temp = front;
        front = front->next;

        if (front != nullptr) {
            front->prev = nullptr;
        } else {
            rear = nullptr;
        }

        delete temp;
    }

    void deleteRear() {
        if (rear == nullptr) {
            cout << "Deque is empty!" << endl;
            return;
        }

        Node* temp = rear;
        rear = rear->prev;

        if (rear != nullptr) {
            rear->next = nullptr;
        } else {
            front = nullptr;
        }

        delete temp;
    }

    void display() {
        Node* current = front;

        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        
        cout << endl;
    }
};

int main() {
    Deque dq;

    dq.insertRear(10);
    dq.insertRear(20);
    dq.insertFront(5);
    
    cout << "Deque after insertions: ";
    dq.display();

    dq.deleteFront();
    cout << "Deque after deleting from front: ";
    dq.display();

    dq.deleteRear();
    cout << "Deque after deleting from rear: ";
    dq.display();

    return 0;
}