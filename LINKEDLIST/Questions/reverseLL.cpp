#include<iostream>
#include<stack>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

// by using another data structure.
Node* reverseLL(Node* head){
    Node* temp=head;
    stack<int> st;

    while(temp!=NULL){
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        temp->data=st.top();
        st.pop();
        temp=temp->next;
    }
    return head;
    
}
// _________________________________________________________________
// without using another data structure.
// Node* reverseLL(Node* head){
//     Node* temp=head;
//     Node* prev=NULL;
//     while(temp!=NULL){
//         Node* front=temp->next;
//         temp->next=prev;
//         prev=temp;
//         temp=front;
//     }
//     return prev;
// }
// _________________________________________________________________

// using recursion.

// Node* reverseLL(Node* head)
// {
//     // Write your code here
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
//     Node* newHead=reverseLL(head->next);
//     Node* front=head->next;
//     front->next=head;
//     head->next=NULL;
//     return newHead;

    
// }

void printLinkedList(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(2);
    head->next->next->next = new Node(4);

    // Print the original linked list
    cout << "Original Linked List: ";
    printLinkedList(head);

    // Reverse the linked list
    head = reverseLL(head);
    
    // _________________________________________________________________

    // head=reverseLL(head);

    // Print the reversed linked list
    cout << "Reversed Linked List: ";
    printLinkedList(head);
    return 0;
}