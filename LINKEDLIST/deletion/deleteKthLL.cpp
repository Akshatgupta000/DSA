#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }

};

Node* convertArr2LL(vector<int> arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;

}

void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

Node* removeK(Node* head, int k){
    if(head==NULL) return head;
    if(k==1){
        Node* temp=head;
        head=head->next;
        delete(temp);
        return head;
    }
    int count=0; 
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        count++;
        if(count==k){
            prev->next = prev->next->next;
            delete(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;

}

int main(){
    vector<int> arr={2,5,8,7};
    Node* head=convertArr2LL(arr);
    head=removeK(head,2);

    print(head);
    return 0;
}