#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

Node* convertArr2DLL(vector<int> arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=0;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
void print(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node* deleteKth(Node* head, int k){
    if(head==NULL){
        return NULL;
    }
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==k) break;

        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* front=temp->next;

    if(prev==NULL && front==NULL){
        return NULL;
    }
    else if(prev==NULL){
        Node* prev = head;      
        head = head->next;    
        head->back = nullptr;   //the back of head should point to null in order to delete the head.
        prev->next = nullptr;   //prev next should also point to null in order to free head.
        return head;  
    }
    else if(front==NULL){
        Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newTail=temp->back;
    newTail->next=NULL;
    temp->back=NULL;
    delete(temp);
    return head;
    }
}


int main(){
    
    return 0;
}