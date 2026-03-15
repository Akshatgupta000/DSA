#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

int main(){
    Node* n = new Node(1);  //this will create a Node
    cout<<n->val<<" "<<n->next<<endl;
    return 0;
}