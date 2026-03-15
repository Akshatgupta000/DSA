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

int height(Node* root){
    if(root==nullptr){
        return -1;  //return 0;
    }
    // int leftHeight = height(root->left);
    // int rightHeight = height(root->right);

    // return max(leftHeight, rightHeight)+1;

    return max(height(root->left),height(root->right))+1;
}

int sum(Node* root){
    if(root==nullptr){
        return 0;
    }

    return root->data + sum(root->left) + sum(root->right);
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

    cout<<"Height of Tree: ";
    int treeHeight = height(root);
    cout<<treeHeight<<" ";
    cout<<endl;

    cout<<"Sum: "<<sum(root);
    return 0;
}