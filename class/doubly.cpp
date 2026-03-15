#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev = NULL;
    }
};

class doublyLinkedList{
    private:
    Node* head;

    public:
    doublyLinkedList() : head(nullptr){}

    void insert(int elements){
        Node* newNode = new Node(elements);
        if(head==NULL){
            head = newNode;
        }
        Node* temp = head;
        while(temp->next){
            temp = temp->next;

        }
        temp->next = newNode;
        newNode->prev = temp;
        
    }
};
int main(){
    
    return 0;
}