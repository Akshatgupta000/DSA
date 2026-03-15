#include<iostream>
using namespace std;

int main(){
    int * p = NULL;
    p  = new int;

    if(p==NULL){
        cout<<"Memory allocation failure.";
        exit(1);
    }
    else{
        cout<<"Memory allocated "<<endl;
        *p = 12;
        cout<<"integer value stored is: "<<*p<<endl;;
        delete p;
        cout<<"memory deallocated."<<endl;
    }
    return 0;
}