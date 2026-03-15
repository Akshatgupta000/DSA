// given a number and a value k. print k multiples of num.
// TABLE

#include<iostream>
using namespace std;

void f(int num, int k){
    // base case
    if(k==0) return;
    //assumption
    f(num,k-1); //the function correctly prints the first k-1 multiples
    // self work
    cout<<(num * k)<<" "<<endl;
}

int main(){
    f(2,10);
    return 0;
}