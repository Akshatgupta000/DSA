#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int runs;

    Person(string name, int runs){
        this->name = name;
        this->runs = runs;
    }

    void print(){
        cout<<name<<" "<<runs<<endl;
    }
    
};
int main(){
  Person p("Akshat",100);  
  p.print();
    return 0;
}


// int x;
// cout<<&x<<endl;      //prints the address of x.

// int* p = &x;     //address of x is stored in p.
// cout<<p<<endl;       //prints the address of x.

// cout<<*p<<endl;      prints value of x.

// a->b == (*a).b