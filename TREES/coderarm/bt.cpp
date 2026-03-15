#include <iostream>
#include <queue>
using namespace std;

// using queue.

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

int main()
{
    // int x; 
    // cout<<"Enter Root: ";
    // cin>>x;

    // int first,second;

    // queue<Node*> q;
    // Node* root = new Node(x);
    // q.push(root);

    // // build the binary tree.
    // while(!q.empty()){
    //     Node* temp = q.front();
    //     q.pop();

    //     cout<<"Enter the left child of data: ";
    //     cin>>first;
    //     // left node
    //     if(first!=-1){
    //         temp->left = new Node(first);
    //         q.push(temp->left);
    //     }

    //     cout<<"Enter the right child of data: ";
    //     cin>>second;

    //     // right node
    //     if(second!=-1){
    //         temp->right = new Node(second);
    //         q.push(temp->right);
    //     }

    // }

    return 0;
}