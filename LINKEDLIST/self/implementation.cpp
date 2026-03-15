#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class LinkedList{
    private:
    Node* head;

    public:
    LinkedList() : head(nullptr){}

    void insertAtBeginning(int elements){
        Node* newNode= new Node(elements);
        newNode->next=head;
        head=newNode;
    }

   void insertAtEnd(int E) {
        Node* newNode = new Node(E);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insertAtKth(int element,int k,int value){
        Node* newNode = new Node(element);
        if(k==0){
            insertAtBeginning(value);
        }

        Node* temp=head;
        int count=0;
        while(temp!=NULL && count<k-1){
            temp=temp->next;
            count++;
        }
        if(count==NULL){
            cout<<"Index out of range"<<endl;
        }

        newNode->next = temp->next;
        temp->next= newNode;
    }

    void insertBeforeValue(int value,int elements){
        Node* newNode = new Node(elements);
        if(head==NULL){
            cout<<"List is Empty"<<endl;
        }
        if(head->data==value){
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* current = head;
        Node* previous = NULL;

        while(current != nullptr && current->data!=value){
            previous = current;
            current = current->next;
        }

        


    }

    void printList(){
        Node* current = head;
        while(current != nullptr){
            cout<<current->data<<" ";
            current = current->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList input;
    cout<<"Enter size: "<<endl;
    int n;
    cin>>n;

    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++){
        int elements;
        cin>>elements;
        input.insertAtEnd(elements);
    }

    // cout<<"insert newElement: "<<endl;
    // int elements;
    // cin>>elements;

     

    // input.insertAtBeginning(5);
    // input.insertAtEnd(elements);

    // input.deleteHead();


    // _____________________________________________________

    // inserting at kth

    

    


    input.printList();
    return 0;
}