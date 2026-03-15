#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;       
    Node* next;     
    Node* back;     

    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArr2DLL(vector<int> arr) {
    Node* head = new Node(arr[0]); 
    Node* prev = head;             
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;       
        prev = temp;         
     }
    return head;  
}
void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " "; 
        head = head->next;         
    }
}
Node* deleteTail(Node* head){
    if(head==NULL || head->next==NULL) return NULL;
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

int main() {
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convertArr2DLL(arr);
    
    head=deleteTail(head);
    print(head);
    return 0;
}