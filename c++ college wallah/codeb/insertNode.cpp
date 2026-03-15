#include<iostream>
using namespace std;

class Node{
public: 
    int Value;
    Node* Next;
};

void printList(Node*n){
    while(n!=NULL){
        cout<<n->Value<<endl;
        n = n->Next;
    }
}
void insertAfter(Node*previous,int newValue){
    // 1.Check if previous node is NULL
    if(previous == NULL){
        cout<<"Previous cannot be NULL";
        return;
    }
    // 2.prepare a newNode
    Node* newNode=new Node();
    newNode->Value = newValue;
    // 3.Insert newNode after previous
    newNode->Next=previous->Next;
    previous->Next=newNode;
}

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->Value = 1;
    head->Next = second;

    second->Value = 2;
    second->Next = third;

    third->Value = 3;
    third->Next = NULL;

    insertAfter(head,-1);
    printList(head);
    return 0;
}