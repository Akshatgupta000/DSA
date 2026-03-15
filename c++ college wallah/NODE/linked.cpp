#include<iostream>
using namespace std;
struct node{
    node *next;
    int data;
};
node *start=NULL;
node *last=NULL;

void display(){
    node *a=start;
    while(a!=NULL){
        cout<<a->data<<" ";
        a=a->next;
    }

    }

void push(){
    int data;
    cin>>data;
    node *nd=new node();
    nd->data=data;

    if(start==NULL){
        start=nd;
        last=nd;
    }
    else{
        last->next=nd;
        last=nd;
    }
}

int main(){
    cout<<"How many node do you want to insert: "<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        push();
    }
    display();
    return 0;
}