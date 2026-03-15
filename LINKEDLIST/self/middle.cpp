#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=next;
    }
};

class LinkedList{
    private:
    Node* head;

    public:
    LinkedList() : head(nullptr){}

    void insertAtHead(int elements){
        Node* newNode = new Node(elements);
        newNode->next=head;
        head=newNode;
    }

    void insertAtEnd(int elements){
        Node* newNode = new Node(elements);
        if(head==NULL){
            insertAtHead(elements);
        }

        Node* temp=head;
        while(temp->next != NULL){
            temp=temp->next;

        }
        temp->next = newNode;
    }

    void printLL(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(){
    LinkedList List;
    cout<<"Enter n: "<<endl;
    int n;
    cin>>n;

    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++){
        int elements;
        cin>>elements;
        List.insertAtEnd(elements);
    }

    List.printLL();

    return 0;
}