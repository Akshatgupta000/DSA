#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int rno;
    float gpa;

    // default constructor.
    // Student(){

    // }

    // Parameterised constructor 
    Student(string s, int r, float g){
        name = s;
        rno = r;
        gpa = g;
    }
};

void placement(Student s){
    cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
}

int main(){
    Student s1("Akshat ", 55, 8.5);

    // agar purane method se initialise krna hai to default constructor banana hoga 
    // Student s2;
    // s2.name = "HI";
    // s2.rno = 50;
    // s2.gpa = 7.9;

    placement(s1);
    // placement(s2);
    
    return 0;
}