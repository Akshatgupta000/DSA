#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class Queue{
    private:
    Node* front;
    Node* rear;

    public:
    Queue(){
        front = rear =NULL;
    }

    bool isEmpty(){
        return front==NULL;
    }

    void push(int x){ 
        Node* temp = new Node(x);
        if(rear==NULL){
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
        cout << x << " pushed to queue." << endl;
    }

    int pop(){
        if(front==NULL){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        int poppedValue = front->data;
        Node* temp = front;
        front = front->next;
        delete(temp);

        cout<<"Popped value: ";
        return poppedValue;
    }

    void display(){
        if(isEmpty()){
            cout<<"Queue is Empty."<<endl;
        }
        Node* temp = front;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;

        }
        cout<<endl;
    }

    
};

int main(){
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    q.display(); // Display current queue

    q.pop();     // Pop an element
    q.display(); // Display after popping

    return 0;
}