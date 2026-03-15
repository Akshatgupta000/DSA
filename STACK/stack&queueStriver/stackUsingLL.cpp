#include<iostream>
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

class stack{
    private:
    Node* top;

    public:
    // stack(): top(nullptr){}

    stack(){
        top = nullptr;
    }

    bool isEmpty(){
        return top == nullptr;
    }

    void push(int x){
        Node* temp = new Node(x);
        temp->next = top;
        top = temp;
    }

    void pop(){
        if(isEmpty()){
            cout<<"Stack underflow"<<endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete(temp);
    }

    void display(){
        if(isEmpty()){
            cout<<"Stack underflow"<<endl;
            return;
        }
        Node* temp = top;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;

    }
};
int main(){
    stack S;
    S.push(4);
    S.push(2);
    S.push(3);
    S.push(1);
    S.display();

    S.pop();
    S.display();
    return 0;
}