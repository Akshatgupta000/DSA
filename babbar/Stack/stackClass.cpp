// stack using arrays 

#include<iostream>
using namespace std;

class stack{
    // properties
    public:
        int* arr;
        int top;
        int size;

    // behaviour
    stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    } 
    void push(int element){
        if(size-top > 1){       //check for empty space.
            top++;
            arr[top] = element;
        }
        else{
            cout<<"stack Overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }

    int peak(){
        if(top>=0)
            return arr[top];
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){
    stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    cout<<st.peak()<<endl;

    st.pop();
    cout<<st.peak()<<endl;

    if(st.isEmpty()){
        cout<<"stack is Empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }

    
    return 0;
}