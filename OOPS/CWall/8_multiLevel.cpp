// MultiLevel inheritance

// two wheeler is child class of Vehicle.
// Bike and Scooty are child of Two wheeler.



#include<iostream>
using namespace std;

class Vehicle{       //parent class
    public:
    int topSpeed;
    float mileage;
    string fuel;

};

class TwoWheeler : public Vehicle{    //child class / derived class
    public:
    bool sunroof;

};
class Bike : public TwoWheeler{    //child class / derived class
    public:
    int gears;

};
class Scooty : public TwoWheeler{    //child class / derived class
    public:
    int bootspace;

};


int main(){
    Scooty s1;
    s1.sunroof = 1;

    Bike b1;
    b1.gears = 6;

    

    
    
    return 0;
}