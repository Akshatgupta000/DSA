// stack using Arrays 
#include<iostream>
#include<stack>
#define MAX 100
using namespace std;

struct Stack{
    int top;
    int arr[MAX];
};

void initStack(struct Stack* stack){
    stack->top = -1;
    
}

int isEmpty(struct Stack* stack){
    return stack->top == -1;
}

int isFull(struct Stack* stack){
    return stack->top == MAX-1;
}

void push(struct Stack* stack, int value){
    if(isFull(stack)){
        cout<<"Stack Overflow, cannot push a new element";
        return;
    }
    cout<<"value inserted in the stack "<<value<<endl;
    stack->arr[++stack->top] = value;
}

int pop(struct Stack* stack){
    if(isEmpty(stack)){
        cout<<"Stack Underflow, cannot pop";
        return -1;
    }
    return stack->arr[stack->top--];
}

int peek(struct Stack* stack){
    if(isEmpty(stack)){
        cout<<"cannot display topn element as stack is empty";
        return -1;
    }
    return stack->arr[stack->top];
}


int main(){
    struct Stack stack;
    initStack(&stack);
    
    push(&stack,10);
    push(&stack,20);
    push(&stack,30);
    push(&stack,40);
    cout<<"value deleted from the stack is "<<pop(&stack)<<endl;;
    
    cout<<"Top element: "<<peek(&stack)<<endl;
    
    
    
    return 0;
    
    
}