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

Node* deleteHead(Node* head){
    if(head==NULL) return head;
    // Node* temp=head;        //assigning temp as head.
    head=head->next;        //head can you move to next.
    // delete temp;            //when head will move to next we will delete temp.
    return head;
}

int main(){
    vector<int> arr={2,5,8,7};
    Node* head=convertArr2LL(arr);
    // cout<<head->data<<endl;
    
    head=deleteHead(head);

    print(head);
    return 0;
}