// You are using GCC
#include<stdio.h>
#include<stdlib.h>

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

struct node* insertAtBeg(struct node* head,int value)
{
    struct node* node1 = createNode(value);
    node1->next=head;
    head=node1;
    return node1;
}

struct node* insertAtEnd(struct node* head, int value){
    struct node* node1=createNode(value);
    if(head==NULL){
        return node1;
    }
    struct node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    
    temp->next=node1;
    return head;
}

struct node* insertAtPos(struct node* head, int position, int value){
    
    struct node* node1=createNode(value);
    
    if(position==1){
        head=insertAtBeg(head,value);
        return head;
    }
    
    struct node* current=head;
    
    for(int i=1;i<position-1 && current!=NULL ;i++){
        current=current->next;
        
    }
    node1->next=current->next;
    current->next=node1;
    return head;
}

struct node* deleteAtPos(struct node* head, int position){
    struct node* prev;
    struct node* temp=head;
    
    if(temp==NULL){
        return head;
    }
    
    if(position==1){
        head=temp->next;
        free(temp);
        return head;
    }
    
    for(int i=1;i<position;i++){
        prev=temp;
        temp=temp->next;
    }
    
    if(temp!=NULL){
        prev->next=temp->next;
        free(temp);
    }
    else{
        printf("Data is not present\n");
    }
    return head;
}

struct node* deleteAtBeg(struct node* head){
    if(head==NULL){
        return NULL;
    }
    
    struct node* temp=head;
    while(head!=NULL){
        head=head->next;
        free(temp);
        return head;
    }
}

struct node* deleteAtEnd(struct node* head){
    if(head==NULL){
        return NULL;
    }

    struct node* second_last=head;
    while(second_last->next->next!=NULL){
        second_last=second_last->next;
    }

    free(second_last->next);

    second_last->next=NULL;
    return head;
}
void printList(struct node* head){
    struct node* current=head;
    while(current!=NULL){
        printf("%d ",current->data);
        // printf("%d ",current->next);
        current=current->next;
    }
}

int main(){
    struct node* head=createNode(10);

    head=insertAtBeg(head,11);
    head=insertAtBeg(head,12);
    head=insertAtEnd(head,13);
    // int position;
    // scanf("%d",&position);
    head=insertAtPos(head,3,14);
    head=deleteAtBeg(head);
    
    head=deleteAtPos(head,2);

    head=deleteAtEnd(head);
    printList(head);
    
    // printf("%d ",head->data);
    // printf("%d",head->next);
    return 0;
}