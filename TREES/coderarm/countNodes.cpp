#include<iostream>
#include<queue>
using namespace std;

struct Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        left = right = NULL;
    }
};

Node* insert(Node* root,int value){
    if(root==NULL){
        return new Node(value);
    }
    if(value<root->data){
        root->left = insert(root->left,value);
    }
    if(value> root->data){
        root->right = insert(root->right, value);
    }
    return root;
}

void inorder(Node* root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int countNode(Node* root){
    if(root==nullptr){
        return 0;
    }
    return 1 + countNode(root->left) + countNode(root->right);  //+1 is for the root.
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

    cout<<"inOrder: ";
    inorder(root);
    cout<<endl;

    int nodes = countNode(root);
    cout<<"Number of node: "<<nodes;
    return 0;
}