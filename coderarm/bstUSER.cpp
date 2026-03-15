#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        left = right = NULL;
    }

};

Node* insert(Node* root, int value){
    if(root==NULL){
        return new Node(value);
    }
    if(value < root->data){
        root->left = insert(root->left,value);
    }
    else if(value > root->data){
        root->right = insert(root->right,value);
    }

    return root;

}



int main(){
    Node* root = nullptr;

    int value;
    while(true){
        cin>>value;
        if(value==-1){
            break;
        }
        root = insert(root,value);
    }


    return 0;
}