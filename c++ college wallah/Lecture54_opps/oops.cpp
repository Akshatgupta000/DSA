// WHY OBJECT ORIENTED PROGRAMMING
// procedure oriented programming 
// ->conventional programming paradigm--use high level languages- C,COBOL,FORTAN.
// ->program-divided into tasks- group into functions 
// ->Global data-accessible from entire program. 
// ->if data structure is changed functions to be revised

// ___________________________________________________________________
// WHAT IS OBJECT ORIENTED PROGRAMMING.
// main focus on data
// bind the data to the functions using it.
// program-divided into objects-data
//                             -functions
// it protects data from accidental changes.

// ___________________________________________________________________
// WHAT IS A CLASS?
// ->fundamental unit of oop
// ->userdefined data types
// ->define some data/properties & methods/functions.

// ___________________________________________________________________
// WHAT ARE OBJECTS
// ->variable data types


#include<iostream>
using namespace std;

class fruit{
public:
    string name;
    string color;
};

int main(){
    
    fruit apple; //object
    apple.name = "Apple";
    apple.color = "Red";
    cout<<apple.name<<"-"<<apple.color<<endl; 

    fruit *mango = new fruit();
    mango->name = "Mango";
    mango->color = "Yellow";
    cout<<mango->name<<"-"<<mango->color<<endl;

    return 0;
}
