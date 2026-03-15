#include<iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node* left;
    Node* right;
    int height;

    Node(int value){
        data = value;
        left = right = NULL;
    }
};

int height(Node* N){
    if(N==nullptr)
        return 0;
    return N->height;
}





Node* insert(Node* root, int value){
    if(root==nullptr){
        return new Node(value);
    }
    if(value < root->data){
        root->left = insert(root->left,value);
    }
    if(value < root->data){
        root->right = insert(root->right, value);
    }
    return root;
}

int main(){
    
    return 0;
}