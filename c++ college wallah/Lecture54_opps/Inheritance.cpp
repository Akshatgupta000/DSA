// INHERITANCE
// ->a class inherits properties of another class.
// A-->>parent class/super class
// B-->>child class/sub class

// EXAMPLES of Inheritance
                        // class Vehicles
                        // tires
                        // capacity
// class car            class truck                 class scooter
// tires                tires                       tires 
// capacity             capacity                    capacity


// access Specifiers & modes of Inheritance
// *public-->>data & functions-> they can be accessed from anywhere
// *private-->>accessible only in own class
// *protected-->> they can be accessible in own class parent class & derived class.

 
 #include<iostream>
 using namespace std;

 class Parent{

    public:
    int x;

    protected:
    int y;

    private:
    int z;
 }; 

 class Child1: public Parent{
    // x will remain public 
    // y will remain protected
    // z will not be accessible
 };

 class Child2: private Parent{
    // x will be private
    // y will be private
    // z will be inaccessible 
 };
  
 class Child3: protected Parent{
    // x will be protected
    // y will be protected
    // z will be inaccessible
 };
 int main(){
    Parent p;
    p.x;

    
    return 0;
 }
 