#include<iostream>
using namespace std;

Node* reverseKGroup(Node* head, int K){
    if(head==NULL) return NULL;

    Node* temp = head;
    int count = 0;
    while(temp!=NULL && count<k){
        temp = temp->next;
        count++;
    }
    if(count<K){
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    count = 0;

    while(curr!=NULL && count<K){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if(next!=NULL){
        head->next = reverseKGroup(next,k);
    }
    return prev;
}

int main(){

}