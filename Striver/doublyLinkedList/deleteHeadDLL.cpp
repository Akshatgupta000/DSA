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
Node* deleteHead(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return nullptr; 
    }
    Node* prev = head;      
    head = head->next;    
    head->back = nullptr;   //the back of head should point to null in order to delete the head.
    prev->next = nullptr;   //prev next should also point to null in order to free head.
    return head;          
}

int main() {
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convertArr2DLL(arr);
    head=deleteHead(head);
    
    print(head);
    return 0;
}