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

Node* convertArr2Ll(vector<int> arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp= new Node(arr[i]);
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
    cout<<endl;
}

Node* insertBeforeValue(Node* head, int element, int val){
    if(head==NULL){         //means LL is empty
        return NULL;
    }
    if(head->data==val){
        return new Node(element, head);
    }
    Node* temp=head;
    while(temp->next!=NULL){
        if(temp->next->data == val){
            Node* x=new Node(element, temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
}

int main(){
    vector<int> arr={1,2,3,4,5};
    Node* head=convertArr2Ll(arr);
    head= insertBeforeValue(head,100,2);
    print(head);
    return 0;
}