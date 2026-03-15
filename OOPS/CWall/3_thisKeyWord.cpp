#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int runs;

    // When we pass same name inside parameterised constructor it will throw error so that's why we use this-> keyword.

    // compiler can't identify which name we are saying that why this is used.

    Person(string name, int runs){
        this->name = name;
        this->runs = runs;
    }

    void print(){
        cout<<name<<" "<<runs<<endl;

    }
};

// when we declare function out of the class we have to pass the variables also, but inside the class it is not needed.

// void print(Person p){
//     cout<<p.name<<" "<<p.runs<<endl;

// }

int main(){
    Person p1("Akshat",100);
    
    p1.print();  //for print function inside the class.

    // print(p1);  //for print function outside the class.
    return 0;
}