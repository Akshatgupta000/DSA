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
//   Person p("Akshat",100);  
//   p.print();

    int x = 5;
    int* p = &x;
    cout<<*p<<endl;

// Both are doing the same thing.

    int* ptr = new int(500);        //called dynamic allocation
    cout<<*ptr<<endl;
    return 0;
}