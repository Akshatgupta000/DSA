// for two numbers x and y. find gcd using recursion.

#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(b>a) return gcd(b,a);
    // base case
    if(b==0) return a; 
    return gcd(b,a%b);
}

int main(){
    int x=gcd(40,48);
    cout<<x<<"\n";  
    return 0;
}