#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *head=NULL;

void insertBeg(int d)
{
    Node *ptr=new Node();
    ptr->data=d;
    ptr->next=head;
    head=ptr;
}

int main(){

    return 0;
}