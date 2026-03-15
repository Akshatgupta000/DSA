#include<iostream>
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
void preorder(Node* root){
   if(root==NULL){
        return;
    }
    cout<<root->data<<" ";

    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node* root){
     if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
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
    return 0;
}