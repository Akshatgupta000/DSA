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

void printPreorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";

    printPreorder(root->left);
    printPreorder(root->right);
}


int main(){
    node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    
    cout<<"PreOrder: "<<endl;
    printPreorder(root);
    return 0;
}