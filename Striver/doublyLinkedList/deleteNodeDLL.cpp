#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1, Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

Node* convertArr2DLL(vector<int> arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i], nullptr, mover);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

void deleteNode(Node* head){
    Node* temp=head;
    Node* prev=temp->next;
    Node* front=temp->next;

    if(front==NULL){
        prev->next=nullptr;
        temp->back=nullptr;
        delete(temp);
        return;
    }
    prev->next=front;
    front->back=prev;

    temp->next=temp->back=nullptr;
    delete(temp);
}
int main(){
    vector<int> arr={1,2,3,4};
    Node* head=convertArr2DLL(arr);
    deleteNode(head->next->next);
    print(head);
    return 0;
}
