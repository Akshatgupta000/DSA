#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> arr){
    if(arr.empty()) return nullptr;
    
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node* insertAtHead(Node* head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    return newNode;
}

int main(){
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    // Reverse the array to maintain the original order
    for(int i=0;i<n/2;i++){
        swap(arr[i], arr[n-i-1]);
    }
    
    Node* head = convertArr2LL(arr);
    cout<<"Created Linked list: ";
    print(head);
    
    int val;
    cin>>val;
    
    head = insertAtHead(head, val);
    
    cout<<"Final List: ";
    print(head);
    
    return 0;
}
// int main(){
//     Node* head = NULL;
    
//     while(true){
//         int data;
//         cin>>data;
        
//         head  = insertAtHead(head,data);
//         cout<<"Node inserted"<<endl;
        
//         int choice;
//         cin>>choice;
        
//         if(choice==1){
//             cout<<"Linked List: ";
//             print(head);
//             cout<<"Node ended"<<endl;
//             break;
//         }
//     }
// }
