#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int rno;
    float gpa;
};

void placement(Student s){
    cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
     
    // if(s.gpa>=7.5){
    //     cout<<"Placed"<<endl;
    // }
    // else{
    //     cout<<"Status Pending"<<endl;
    // }
}

void change(Student& s){
    s.name = "Alex";
}

int main(){
    Student s1 ;
    s1.name = "Akshat";
    s1.rno = 5;
    s1.gpa = 7.5;

    // cin>>s1.rno;

    Student s2 ;
    s2.name = "Gupta";
    s2.rno = 10;
    s2.gpa = 6.5;

    // cout<<s1.name<<" "<<s1.rno<<endl;;
    placement(s1);
    change(s1);     //pass by value ho rha hai to value change nhi hoga.
    // use & to make changes.

    placement(s1);
    // placement(s2);
    return 0;
}

// by default -> pass by value hota hai.