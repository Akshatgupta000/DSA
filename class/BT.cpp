// You are using GCC
#include <iostream>
#include<stdlib.h>

using namespace std;

struct tnode
{
    int data;
    struct tnode *right;
    struct tnode *left;
};

struct tnode *CreateBST(struct tnode *, int);
void Inorder(struct tnode *);
void Preorder(struct tnode *);
void Postorder(struct tnode *);

int main()
{
    struct tnode *root = NULL;
    int choice, item, n, i;
    do
    {
        cin>>choice;
        switch(choice)
        {
        case 1:
            root = NULL;
            cin>>n;
            for(i = 1; i <= n; i++)
            {
                cin>>item;
                root = CreateBST(root,item);
            }
            break;
        case 2:
            cout<<"Inorder: ";
            Inorder(root);
            cout<<"\n";
            break;
        case 3:
            cout<<"Preorder: ";
            Preorder(root);
            cout<<"\n";
            break;
        case 4:
            cout<<"Postorder: ";
            Postorder(root);
            cout<<"\n";
            break;
        case 5:
            exit(0);
            break;
        default:
            break;
        }
    } while(1);
    return 0;
}

struct tnode *CreateBST(struct tnode *root, int item) {
    //Type your code here
    if(root == NULL){

        // return new tnode(item);

        struct tnode* temp = new tnode();
        temp->data = item;
        temp->left = temp->right = NULL;
        
        return temp;
    }
    if(item<root->data){
        
        root->left = CreateBST(root->left,item);
    }
    else{
        root->right = CreateBST(root->right,item);
    }
    
    return root;
    
    
}

void Inorder(struct tnode *root) {
    //Type your code here
    if(root==NULL){
        return;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
    
}

void Preorder(struct tnode *root) {
    //Type your code here
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
    
}

void Postorder(struct tnode *root) {
    //Type your code here
    if(root==NULL){
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
    
}