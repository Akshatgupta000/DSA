// You are using GCC
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Stack{
    struct Node* top;
};

struct Node* createNode(int value){
    struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
    node1->data = value;
    node1->next = NULL;
    return node1;
}

struct Stack* createStack(){
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = NULL;
    return stack;
}

int isEmpty(struct Stack* stack){
    return stack->top == NULL;
}

void push(struct Stack* stack,int value){
    struct Node* node1 = createNode(value);
    node1->next = stack->top;
    stack->top = node1;
    printf("node is inserted with value %d\n",value);
}

int pop(struct Stack* stack){
    if(isEmpty(stack)){
        printf("cannot pop any element as stack is empty");
        return -1;
    }
    struct Node* temp = stack->top;
    int popped = temp->data;
    stack->top  = stack->top->next;
    free(temp);
    return popped;
    
}

int main(){
    struct  Stack* stack = createStack();
    push(stack,10);
    push(stack,20);
    push(stack,30);
    push(stack,40);
    
    printf("value popped: %d",pop(stack));
}