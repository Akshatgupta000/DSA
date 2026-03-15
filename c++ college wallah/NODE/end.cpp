#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node *start=NULL;
node *last=NULL;

void tail(){
    node *x=start;
    node *nd=new node();
    nd->data=69;
    while(x->next!=NULL){
        x=x->next;
    }
    x->next=nd;
}
void display(){
    node *a=start;
    while(a!=NULL){
        cout<<a->data<<" ";
        a=a->next;
    }
}


void push(int i){

    cout<<"Enter the "<<i<<" node"<<endl;
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
    cout<<"How many elements"<<endl;
    int n;
    cin>>n;

    for(int i=1;i<n+1;i++){
        push(i);
    }

    tail();
    display();
}