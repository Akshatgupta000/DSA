#include<iostream>
#include<string>
using namespace std;

class Teacher {
    private:
    double salary;

    // Properties or objects.
    public:
    string name;
    string dept;
    string subject;
    // double salary;


    // methods / member function-> Function but it is inside Class.
    void changeDept(string newDept){
        dept = newDept;
    }

// Setter
    void setSalary(double s){
        salary=s;
    }
// Getter
    double getSalary(){
        return salary;
    }


};

int main(){
    Teacher t1;
    t1.name="Akshat";  
    t1.dept="Computer Science";

    // ->salary is inside private class so we cannot access it.
    // t1.salary=50000;

    cout<<t1.dept<<endl;

    // we can access salary but we have to make a seperate function in public class.

    t1.setSalary(25000);
    cout<<t1.getSalary();
    


    return 0;
}