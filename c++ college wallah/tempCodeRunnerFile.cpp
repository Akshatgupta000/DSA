#include<iostream>
using namespace std;
int main(){
struct{
    int number;
    string name;
}
done;

int number;
cin>>number;
string name;
cin>>name;
done.number=number<<endl;
done.name=name;

cout<<done.number<<endl;
cout<<done.name<<endl;
}