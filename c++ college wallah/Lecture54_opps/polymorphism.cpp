// POLYMORPHISM
// ability of objets/methods to take different forms.

// TYPES OF POLYMORPHISM
// 1.compile time Polymorphism
// 2.runtime Polymorphism

// .function overloading-> define a number of functions with some function name they perform differently acc to the arguments passed.

#include<iostream>
using namespace std;

class Sum{

    public:
    void add(int x,int y){
        int sum = x+y;
        cout<<sum<<endl;
    }

    void add(int x, int y, int z){
        int sum = x+y+z;
        cout<<sum<<endl;
    }

    void add(float x, float y){
        float sum = x+y;
        cout<<sum<<endl;
    }
}; 

int main(){
    
    Sum s;
    s.add(2,3);
    s.add(2,3,4);
    s.add(float (2.3),float (2.7));

    return 0;
}