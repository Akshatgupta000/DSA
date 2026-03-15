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

Node* binary(){
    int x;
    cin>>x;

    if(x==-1){
        return NULL;
    }

    Node* temp = new Node(x);

    // left side create;
    cout<<"Enter the left child of "<<x<<" : ";
    temp->left = binary();

    // right side create
    cout<<"Enter the right child of "<<x<<" : ";
    temp->right = binary();

    return temp;
}

int main(){
    cout<<"Enter the root node: ";
    Node* root;
    root = binary();
    return 0;
}