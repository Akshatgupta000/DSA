#include<iostream>
using namespace std;
struct teacher{

    string name;
    int age;
    int salary;
    // bool english;
    string gender;

void teacherDetails(){
    cout<<"Name is: "<<name<<endl;
    cout<<"age is: "<<age<<endl;
    cout<<"salary is: "<<salary<<endl;
    cout<<"gender is: "<<gender<<endl;
}
};
int main(){
    teacher Kamlesh= {"Kamlesh",40,20000,"male"};

    Kamlesh.teacherDetails();
    cout<<endl;
    return 0;
}