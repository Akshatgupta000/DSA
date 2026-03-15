// TYPES OF INHERITANCE
// single inheritance
#include<iostream>
using namespace std;

class Parent{
    public:
        Parent(){
            cout<<"Parent class"<<endl;
        }
};

// class Parent2(){
//     public:
//     parent2(){
//         cout<<"Parents2 class"<<endl;
//     }
// }

class Child: public Parent{
    public:
    Child(){
        cout<<"Child class"<<endl;
    }
};
// _________________________________________________________

// MULTI-LEVEL INHERITANCE
// parent class is derived from another class.

// // class GrandChild: public Child{
//     public:
//         GrandChild(){
//             cout<<"Grandchild class"<<endl;
//         }
// };
// __________________________________________________________

// multiple inheritance

// class Child: public Parents1, public Parents2{
//     public:
//     Child(){
//         cout<<"Child class"<<endl;
//     }
// };


int main(){
    
    Child c;
    // GrandChild c;

    return 0;
}

// DIAMOND PROBLEM-> base class has multiple parent class having a common ancestor class.