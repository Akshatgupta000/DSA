#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int data){
    Node* temp = new Node();
    temp->data = data;
    temp->left = NULL;
    temp-> right = NULL;

    return temp;
}

struct Node* insertNode(Node* root,int data){
     if(root==NULL){
        return newNode(data);
    }
    if(data<root->data){
        root->left = insertNode(root->left,data);
    }
    else{
        root->right = insertNode(root->right,data);
    }
    return root;
}

// function to search for a value in the binary search tree
struct  Node* search(struct Node* root, int key)
{
    if(root==NULL || root->data == key){
        return root;
    }
    if(key<root->data){
        return search(root->left,key);
    }
    return search(root->right, key);
};


int main(){
    
    return 0;
}