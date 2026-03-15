#include<iostream>
#include<vector>
using namespace std;


struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val): data(val), left(nullptr), right(nullptr) {}
};

// root-left-right

void preOrder(Node* root, vector<int> &arr){
    if(root==nullptr){
        return;
    }
    arr.push_back(root->data);
    preOrder(root->left,arr);
    preOrder(root->right,arr);
}
vector<int> preorder(Node* root){
    vector<int> arr;

    preOrder(root,arr);
    return arr;
}


int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(4);
    root->left->left=new Node(5);

    vector<int> result=preorder(root);
    for(int val:result){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}