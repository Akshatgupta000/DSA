// ENCAPSULATION
// ->binding of methods & variables together into a single unit->[class].
// ->HOW? -> data is only accessible from the class methods.
// ->also leads to data abstraction/hiding.
// ->CLASS--Abstract data type(ADT).

// for example if i am working in admin division & if someone wants to access any information then they have to contact me.

#include<iostream>
using namespace std;

class ABC{
    int x;

    public:

    void set(int n){
        x=n;
    }
    int get(){
        return x;
    }
};
int main(){
    
    ABC obj1;
    obj1.set(3);
    cout<<obj1.get()<<endl;
    
    return 0;
}