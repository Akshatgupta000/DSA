#include<iostream>
using namespace std;

class Node{
public:
    int value;
    Node* next;
    Node* previous;
};

int main(){
    Node* head;
    Node* tail;

    Node* node = new Node();
    node->value = 4;
    node->next = nullptr;
    node->previous = nullptr;
    head=node;
    tail=node;

    

    cin.get()
    return 0;
}