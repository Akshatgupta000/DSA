#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

node* newNode(int data){
    node* element=new node();
    element->data=data;
    element->left=NULL;
    element->right=NULL;

    return element;
}

vector<int> print(node* root){
   vector<int> ans;
   queue<node*> q;
   q.push(root);
   if(root==NULL){
    return ans;
   }
   while(!q.empty()){
    node* temp=q.front();
    q.pop();
    ans.push_back(temp->data);
    if(temp->left!=NULL){
           q.push(temp->left); 
    }
    if(temp->right!=NULL){
        q.push(temp->right);
    }
   }
   cout<<endl;
   return ans;


}


int main(){
    node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);

    print(root);
    return 0;
}