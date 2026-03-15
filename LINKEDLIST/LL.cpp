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

// we have created multi constructor so that we dont have to define nullptr every time.
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

// int main(){
//     vector<int> arr={2,5,8,7};

//     // GIVES ADDRESS.
//     Node* y=new Node(arr[0]);
//     cout<<y<<endl;
//     // GIVES DATA VALUE.
//     cout<<y->data;

//     // we cannot use y.data because node* is storing the data address.

//     // GIVES DATA VALUE.
//     // Node y=Node(arr[0], nullptr);
//     // cout<<y.data;
    

//     return 0;
// }
// _________________________________________________

// CONVERTING ARR TO LL.

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

// finding length of LL.
int lengthOfLL(Node* head){
    int cnt=0;
    Node* temp=head;
    while(temp){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}

// searching an element in a LL
int checkIfPresent(Node* head,int val){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==val)
            return 1;
            temp=temp->next;
    }
     return 0;
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

// _________________________________________________
int main(){
    vector<int> arr={2,5,8,7};


    Node* head=convertArr2LL(arr);
    // cout<<head->data<<endl;

    // traversing in LL.
    // Node* temp=head;
    // while(temp){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }
    // cout<<endl;

    print(head);


    // length
    cout<<lengthOfLL(head)<<endl;

    // searching
     int val = 6; 
     cout <<checkIfPresent(head, val) << '\n';
}