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
    node *z=new node();
    z->data=data;

    if(start==NULL){
        start=z;
        last=z;
    }
    else{
        last->next=z;
        last=z;
    }
}

int main(){
    cout<<"how many"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        push();
    }
    display();
    return 0;
}