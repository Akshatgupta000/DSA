#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList{
    private:
    Node* head;

    public:
    LinkedList() : head(nullptr){}

    void insertAtHead(int elements){
        Node* newNode = new Node(elements);
        newNode->next = head;
        head=newNode;
    }

    void printList(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
    }
}
};

int main(){
    LinkedList list;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int elements;
        cin>>elements;
        list.insertAtHead(elements);
    }

    list.printList();
    return 0;
}