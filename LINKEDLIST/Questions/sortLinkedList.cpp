#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
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

Node* sortTwoLinkedList(Node* list1, Node* list2){
    vector<int> arr;
    Node* temp1 = list1;
    Node* temp2 = list2;

    while(temp1!=NULL){
        arr.push_back(temp1->data);
        temp1 = temp1->next;
    }

    while(temp2!=NULL){
        arr.push_back(temp2->data);
        temp2 = temp2->next;
    }

    sort(arr.begin(),arr.end());

    Node* head = convertArr2LL(arr);

    return head;

}

int main(){

}