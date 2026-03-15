#include<iostream>
using namespace std;

int main(){
    char y='c';
    // int x=20;
    // declare pointer variable
    int *ptr;   //address
    // ptr = &x;   //original value

    // int *ptr = &x;
    char *pointer = &y;

    cout<<ptr<<endl;
    cout<<*ptr<<endl; 
    return 0;
}