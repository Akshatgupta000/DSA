#include<iostream>
using namespace std;

#define size 100

class Stack{
    private:
    int top;
    int arr[size];

    public:
    Stack(){
        top = -1;
    }

    bool isEmpty(){
        return top == -1;
    }

    bool isFull(){
        return top==size-1;
    }

    void push(int value){
        if(isFull()){
            cout<<"Stack is Full."<<endl;
            return;
        }
        arr[++top] = value;
        cout<<value<<" "<<endl;
    }

    void pop(){
        if(isEmpty()){
            cout<<"Stack is Empty."<<endl;
            
        }
        cout<<arr[top--]<<endl;
    }

    void display(){
        if(isEmpty()){
            cout<<"Stack is empty."<<endl;
        }

        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


};

int main(){
    Stack s;
    int n;
    cin>>n;

    int value;
    for(int i=0;i<n;i++){
        cin>>value;
        s.push(value);
    }

    // cout<<"Popped element: ",s.pop();

    s.display();
    return 0;
}