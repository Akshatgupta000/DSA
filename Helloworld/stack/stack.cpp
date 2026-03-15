#include<iostream>
#include<stack>
using namespace std;

void printElementOfStack(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout<<"isEmpty: "<<s.empty()<<endl;
    cout<<"size: "<<s.size()<<endl;
    
    printElementOfStack(s);
}