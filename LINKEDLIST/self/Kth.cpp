#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

class LinkedList{
    private:
    Node* head;

    public:
    LinkedList(){
        head=nullptr;
    }
    void insertAtHead(int elements){
        Node* newNode = new Node(elements);
        newNode->next=head;
        head=newNode;
    }

    void insertAtTail(int elements){
        Node* newNode = new Node(elements);
        if(head==NULL){
            insertAtHead(elements);
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }

    void insertAtIndex(int index, int value){
        Node* newNode = new Node(value);
        if(index==0){
            // insertAtHead(value);
            insertAtTail(value);
            return;
        }

        Node* temp=head;
        int count=0;
        while(temp!=NULL && count<index-1){
            temp=temp->next;
            count++;
        }
        if(temp==nullptr){
            cout<<"NO"<<endl;
            return;
        }

        newNode->next = temp->next;
        temp->next=newNode;
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }


};

int main(){
    LinkedList list;
    cout << "Enter the number of elements: ";
    int n,value,index;
    cin>>n;


    cout << "Enter the elements: ";
    for(int i=0;i<n;i++){
        int elements;
        cin>>elements;
        list.insertAtHead(elements);
    }

 cout << "Enter the index at which to insert the new element: ";
    cin>>index;

    cout << "Enter the value to insert: ";
    cin>>value;

    list.insertAtIndex(index,value);

    list.display();

    return 0;
}