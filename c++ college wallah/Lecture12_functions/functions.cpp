// FUNCTIONS-> logical set of code-> perform a specific task

// functions are important in c++ because of reusability for different programs

#include<iostream>
using namespace std;

int add(int num1, int num2){
    int sum=num1+num2;
    return sum;
}
int add(int num1, int num2, int num3){
    int sum=num1+num2+num3;
    return sum;
}
float add(float num1,float num2){
    float sum=num1+num2;
    return sum;
}

int main(){
    int a=5;
    int b=4;

    cout<<add(a,b,10)<<endl;
    
    return 0;
}