#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next; 

    Node(int data){
        this->data = data;
        this->next = next;
    }
};

class LinkedList{
    private:
    Node* head;

    public:
    LinkedList() : head(nullptr){}

    void insertAtBegin(int elements){
        Node* newNode = new Node(elements);
        newNode->next = head;
        head = newNode;
    }
    void insertAtEnd(int elements){
        Node* newNode = new Node(elements);
        if(head==NULL){
            insertAtBegin(elements);
        }
        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newNode;

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
    cout<<"Enter size: "<<endl;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int elements;
        cin>>elements;
        list.insertAtEnd(elements);
    }

    list.printList();

    return 0;
}