// given a number n. find the sum of natural numbers till n but with alternate signs.
// that means if n=5 then you have to return 1-2+3-4+5=3 as your answer.

#include<iostream>
using namespace std;

int f(int n){
    // base case
    if(n==0) return 0;
    // assumption
    return f(n-1) + ((n%2==0) ? (-n) : (n)); //calculate sum of first n-1 natural num with alternate and we wil add contri of n
}

int main(){
    cout<<f(10)<<endl;
    return 0;
}