#include<iostream>
using namespace std;

class Node{
public: 
    int data;
    Node* Next;
};

void printList(Node*n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n = n->Next;
    }
}
void insertAtTheFront(Node**head, int newData){
    // 1.prepare a newNode
    Node* newNode = new Node();
    newNode->data = newData;
    // 2. put it in front of current head
    newNode->Next = *head;
    // 3. move head of the list to point to the newNode
    *head = newNode;
}

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 1;
    head->Next = second;

    second->data = 2;
    second->Next = third;

    third->data = 3;
    third->Next = NULL;

    insertAtTheFront(&head, 4);
    printList(head);
    return 0;
}