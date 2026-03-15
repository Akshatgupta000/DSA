#include<iostream>
#include<string>
using namespace std;
class student {
    private:
    int roll_no;
    
    protected:
    char section[10];

    public:
    void get_rno(){
        cout<<"Enter the roll number";
        cin>>roll_no;
    }

    void show_rno(){
        cout<<"Roll no: "<<roll_no;
    }
};

class result:public student{
    private:
    float fees;

    public:
    void get_data(){
        get_rno();
        cout<<"\nenter fees: ";
        cin>>fees;

        cout<<"\nEnter section: ";
        cin>>section;
    }

    void display(){
        show_rno();
        cout<<"\nFees: "<<fees;
        cout<<"\nSection: "<<section;
    }
};
int main(){
  result obj1;
  obj1.get_data();
    obj1.display();

    return 0;
}