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

Node* insert(Node* root, int target){
    if(root==NULL){
        return new Node(target);
    }

    if(target<root->data){  //left side
        root->left = insert(root->left,target);
    }
    if(target>root->data){  //right side.
        root->right = insert(root->right,target);
    }
    return root;
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

    // CODE for searching and inserting is similar.
    
bool search(Node* root, int target){
    if(root==NULL){
        return 0;
    }
    if(root->data == target){
        return 1;
    }
    if(target < root->data){
        return search(root->left, target);
    }
    else{
        return search(root->right, target);
    }
}

int main(){
    int arr[] = {4,2,7,33,77,4,9,8,44,1};
    Node* root = NULL;

    for(int i=0;i<10;i++){
        root = insert(root,arr[i]);
    }

    // inorder(root);

    cout<<search(root,4)<<endl;
    return 0;
}