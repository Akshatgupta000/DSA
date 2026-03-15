#include<iostream>
#include<algorithm>
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

    void insertAtEnd(int elements){
        Node* newNode = new Node(elements);
        if(head==NULL){
            // insertAtHead(elements);
            head=newNode;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void deleteHead(int elements){
        if(head==NULL){
            cout<<"Linked list is empty"<<endl;
            return;
        }
        Node* temp =head;
        head=head->next;
        delete(temp);
    }

    void deleteTail(int elements){
        if(head==NULL){
            cout<<"Linked List is empty."<<endl;
            return;
        }
        if(head->next==NULL){
            delete head;
            head=nullptr;
            return;
        }
        Node* temp = head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

    void deleteKthIndex(int elements, int k,int value){

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
    int elements;
    for(int i=0;i<n;i++){
        // int elements;
        cin>>elements;
        list.insertAtEnd(elements);
       
    }
    
    // list.deleteHead(elements);
    list.deleteTail(elements);
    
    list.printList();

    return 0;
}