#include<iostream>
using namespace std;

class Student{
    public:
    int rno;
    string name;

    Student(int rno, string name, float marks){
        this->rno = rno;
        this->name = name;
        this->marks = marks;
    }
    void display(){
        cout<<rno<<" "<<name<<" "<<marks<<endl;
    }

    float getMarks(){       //getter
        return marks;
    }
    void setMarks(float m){        //setter
        marks = m;
    }


private:    //we can only access private member inside class. 
float marks;

};

int main(){
    Student s1(5,"Akshat",100);
    s1.display();

    cout<<s1.getMarks()<<" "<<endl;
    s1.setMarks(95);
    s1.display();
    
    return 0;
}

