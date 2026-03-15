#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
    string data;
    Node* next;

    Node(string data){
        this->data=data;
        this->next=NULL;
    }
};

class LinkedList{
    private:
    Node* head;

    public:
    LinkedList(){
        head=nullptr;
    }
    void insertAtBeginning(string data){
        Node* newNode= new Node(data);
        newNode->next=head;
        head=newNode;
    }

};

int main(){
    int n;
    cin>>n;

    LinkedList document;

    for(int i=0;i<n;i++){
        string line;
        getline(cin,line);
        document.insertAtBeginning(line);
    }
    return 0;
}