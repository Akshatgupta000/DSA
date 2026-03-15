// 0,1,1,2,3,5,8,13,21......
#include<iostream>
using namespace std;

int fib(int n){
    // base case
    if(n==0 or n==1) return n;
    return fib(n-1) + fib(n-2);
}

int main(){
    int result = fib(4);
    cout<<result;
    return 0;
}