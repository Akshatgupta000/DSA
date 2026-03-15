#include<iostream>
using namespace std;

class Vehicle{       //parent class
    public:
    int topSpeed;
    float mileage;
    string fuel;

};

class Car : public Vehicle{    //child class / derived class
    public:
    bool sunroof;

};
class Bike : public Vehicle{    //child class / derived class
    public:
    int gears;

};
class Scooty : public Vehicle{    //child class / derived class
    public:
    int bootspace;

};


int main(){
    Car c1;
    c1.sunroof = 1;

    Bike b1;
    b1.gears = 6;

    

    
    
    return 0;
}