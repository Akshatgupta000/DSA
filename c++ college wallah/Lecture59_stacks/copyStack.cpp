// whenever we transfer data from 1 stack to another, it gets reversed.
#include<iostream>
#include<stack>
using namespace std;

stack<int> copyStack(stack<int> &input){
    stack<int> temp;
    while(not input.empty()){
        //do the process till the time input stack doesn't become empty
        int curr=input.top();
        input.pop();
        temp.push(curr);
    }
}



int main(){
    
    return 0;
}