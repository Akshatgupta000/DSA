#include<iostream>
using namespace std;

struct node{
    int data;
    node* left=NULL;
    node* right=NULL;
};

node* newNode(int data){
    node* temp=new node();
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;

    return temp;
}

void printPostOrd(node* root){
    if(root==NULL){
        return;
    }
    printPostOrd(root->left);
    printPostOrd(root->right);
    cout<<root->data<<" ";
}

int main(){
    node* root=newNode(1);
    root->left=newNode(2);
    root->left->left=newNode(3);
    root->left->right=newNode(4);
    
    cout<<"PostOrder: "<<endl;
    printPostOrd(root);
    return 0;
}