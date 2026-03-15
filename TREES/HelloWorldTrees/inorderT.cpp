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

void printInorder(node* root){
    if(root==NULL){
        return;
    }
//    traverse left part of tree
printInorder(root->left);

// then print data
cout<<root->data<<" ";

// traverse right part of tree
printInorder(root->right);
}

int main(){
    // left-root-right
    node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);

    cout<<"Inorder : "<<endl;
    printInorder(root);
    return 0;
}