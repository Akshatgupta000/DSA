#include <iostream>
using namespace std;

struct node
{
    /* data */
    int data;
    node *left;
    node *right;
};

node* newNode(int data){
    node* element = new node();
    element->data=data;
    element->left=NULL;
    element->right=NULL;

    return element;

}

node* insertNode(node* root, int data){
    if(root==NULL){
        return newNode(data);
    }
    if(data<root->data){
        root->left = insertNode(root->left,data);
    }
    else{
        root->right = insertNode(root->right,data);
    }
    return root;
}

void printNode(node* root){
    if(root!=NULL){
        cout<<root->data<<" ";
        printNode(root->left);
        
        printNode(root->right);
    }
    
}

int main()
{
    // make root node
    node* root=newNode(1);
    /*
        1
       /  \
    NULL   NULL
    */

   root->left=newNode(2);

   /*
        1
       /  \
      2    NULL
     / \
  NULL  NULL

      */
    root->right=newNode(3);
    
   /*
        1
       /  \
      2    3
     / \  
  NULL  NULL

      */

    root->left->left=newNode(4);

    printNode(root);
    return 0;
}