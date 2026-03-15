#include<iostream>
using namespace std;
struct student{

string name;
int age;
int roll;

void studentDetails(){
    cout<<"name is: "<<name<<endl;
    cout<<"age is: "<<age<<endl;
    cout<<"roll is: "<<roll<<endl;
}
};
int main(){
    student prince;
    prince.age=21;
    prince.name="prince";
    prince.roll=44;

    student prateek = {"prateek",18,56};

    prince.studentDetails();
    cout<<endl;
    prateek.studentDetails();
    cout<<endl;

    return 0;
}