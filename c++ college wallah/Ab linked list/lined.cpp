#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *head=NULL;  //global

int main()
{
    Node *ptr=new Node();
    ptr->data=2;
    ptr->next=NULL;
    head=ptr;
    return 0;
}