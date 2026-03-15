#include<iostream>
using namespace std;

int main(){
    int * p = NULL;
    p = new int;

    int * r =  NULL;
    r = new int;

    int * t = NULL;
    t  = new int;

    if(p==NULL || r==NULL || t==NULL){
        cout<<"Memory allocation failure.";
    }
    else{
        cout<<"Memory allocated."<<endl;;

        *p = 10;
        *r = 5;
        *t = 2;

        int *si = new int;
        
        cout<<"Simple INterest: "<<*p**r**t/100<<endl;
        delete p;
        delete r;
        delete t;
    }
    return 0;
}