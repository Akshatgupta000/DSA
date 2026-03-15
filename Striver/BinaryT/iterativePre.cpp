#include <iostream>
#include<stack>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
// ROOT-LEFT-RIGHT
// void preorder(Node* root, vector<int> &arr){
//     if(root == nullptr){
//         return;
//     }
//     arr.push_back(root->data);
  
//     preorder(root->left, arr);

//     preorder(root->right, arr);
// }

// using stack 
vector<int> preOrder(Node* root){
 
    vector<int> preorder;
    if(root==NULL) return preorder;

    stack<Node*> st;
    st.push(root);
    while(!st.empty()){
        root=st.top();
        st.pop();
        preorder.push_back(root->data);
        if(root->right !=NULL){
            st.push(root->right);
        }
        if(root->left!=NULL){
            st.push(root->left);
        }
    }
    return preorder;
    
}   
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> result = preOrder(root);
    cout << "Preorder Traversal: ";
    for(int val : result) {
        cout << val << " ";
    }
    cout << endl;


    return 0;
}

                            
                        