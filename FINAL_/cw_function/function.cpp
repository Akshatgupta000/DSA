#include<iostream>
using namespace std;

// void greet(){
//     cout<<"Hello"<<endl;
//     cout<<"How are you"<<endl;
//     return;
// }

// int main(){
//     greet();
//     greet();
//     greet();
//     return 0;
// }

// ___________________________________________________

// sum of two number. 
// int add(int a,int b){
//     return a+b;
// }
// int main(){
//     int a;
//     cin>>a;

//     int b;
//     cin>>b;

//     int sum=add(a,b);
//     cout<<"sum: "<<sum<<endl; 
// }

// ____________________________________________________________

// print nCr without using functions.

// int main(){
//     int n;
//     cout<<"Enter n: "<<endl;
//     cin>>n;

//     int r;
//     cout<<"Enter r: "<<endl;
//     cin>>r;

//     int nfact=1; //n!
//     int rfact=1;    //r!
//     int nrfact=1;   //n-r !

//     for(int i=2;i<=n;i++){
//         nfact=nfact*i;
//     }
//     for(int i=2;i<=r;i++){
//         rfact=rfact*i;
//     }
//     for(int i=2;i<=n-r;i++){
//         nrfact=nrfact*i;
//     }
//     int ncr=nfact/(rfact*nrfact);
//     cout<<"ncr: "<<ncr;
//     return 0;
// }
// __________________________________

// now using function.

// int factorial(int x){
//     int fact=1;
//     for(int i=2;i<=x;i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int main(){
//     int n;
//     cout<<"Enter n: "<<endl;
//     cin>>n;

//     int r;
//     cout<<"Enter r: "<<endl;
//     cin>>r;

//     int ncr=factorial(n)/(factorial(r)*factorial(n-r));
//     cout<<"nCr: "<<ncr;
// }

// ______________________________________________________________

// swap two numbers
// int main(){
//     int a;
//     cout<<"Enter a: "<<endl;
//     cin>>a;

//     int b;
//     cout<<"Enter b: "<<endl;
//     cin>>b;

//     int temp;
//     temp=a;
//     a=b;
//     b=temp;

//     cout<<"a: "<<a<<endl;
//     cout<<"b: "<<b<<endl;
//     return 0;
// }

// ___________________________________________________________________
// swap without using third variable.
// int main(){
//     int a;
//     cout<<"Enter a: "<<endl;
//     cin>>a;

//     int b;
//     cout<<"Enter b: "<<endl;
//     cin>>b;

//     a=a+b;
//     b=a-b;
//     a=a-b;

//     cout<<"a: "<<a<<endl;
//     cout<<"b: "<<b<<endl;

// }
// ___________________________________________________________________

// swap using functions

// void swap(int a,int b){

//     int temp=a;
//     a=b;
//     b=temp;
// }
// int main(){
//     int a;
//     cout<<"Enter a: "<<endl;
//     cin>>a;

//     int b;
//     cout<<"Enter b: "<<endl;
//     cin>>b;

//     swap(a,b);

//     cout<<"a: "<<a<<endl;
//     cout<<"b: "<<b<<endl;
// }