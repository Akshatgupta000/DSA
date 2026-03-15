#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    // public:
    // node(int data1,node* next1){
    //     data=data1;
    //     next=next1;
    // }

    public:
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};





int main(){
    node* node1=new node(10);
    cout<<node1->data<<endl;

    node* node2=new node(20);
        cout<<node2->data<<endl;


    // cout<<node1->next<<endl;

    node* head=node1;

    return 0;
}