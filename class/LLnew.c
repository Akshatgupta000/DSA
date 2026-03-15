#include<stdio.h>
struct node{
    int data;
    struct node* next;
};

struct node* createNode(int value){
    struct node* node1=(struct node*)malloc(sizeof(struct node*));
    node1->data=value;
    node1->next=NULL;
    return node1;
}

void printList(struct node* head){
    struct node* current=head;
    while(current!=NULL){
        printf("%d ",current->data);
        current=current->next;
    }
}

struct node* insertAtHead(struct node* head,int value){
    
}

int main(){
    struct node* head=createNode(10);

}