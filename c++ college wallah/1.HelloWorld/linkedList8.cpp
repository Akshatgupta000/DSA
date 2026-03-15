// linked list insertion-front.
#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

void printList(node *n){
    int count=0;
    while(n!=NULL){
        cout<<n->data<<endl;
        n=n->next;
        count++;

    }
    cout<<"NO. of elements in linked list is: "<<count<<endl;
}

node *push(node *head, int newData){
    node *newNode=new node();
    newNode->data=newData;
    newNode->next=head;
    head=newNode;
    return head;

}

int main(){
    node *head=NULL;
    push(head , 5);
    push(head, 7);

    printList(head);
    return 0;
}