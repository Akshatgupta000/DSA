// Runtime Polymorphism
// ->resolved at runtime
// ->using function overriding

// child class defines a function of parent class 

#include<iostream>
using namespace std;

class Parent{
    public:
    
        virtual void print(){
            cout<<"parent class"<<endl;
        }
        void show(){
            cout<<"Parent class"<<endl;
        }
};

class Child: public Parent{
    public:
    
        void print(){
            cout<<"parent class"<<endl;
        }
        void show(){
            cout<<"Parent class"<<endl;
        }
};

int main(){
    Parent *p;
    Child c;

    p=&c;
    p->print();
    p->show();
    return 0;
}