#include<iostream>
using namespace std;

// Armstrong number.
// example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.

// int main(){
//     int n;
//     cout<<"Enter n: "<<endl;
//     cin>>n;

//     int num,remainder,result=0;
//      num=n;

//      while(num!=0){
//         remainder=num%10;
//         result+=remainder*remainder*remainder;
//         num/=10;
//      }
//      if(result==n){
//         cout<<"Armstrong."<<endl;
//      }
//      else{
//         cout<<"NO."<<endl;
//      }
//     return 0;
// }
// _________________________________________________________________________

// count number of digits.
// int main(){
//     int n;
    // cout<<"Enter n: "<<endl;
//     cin>>n;
//     int count=0;
//     while(n!=0){
//         n=n/10;
//         count++;
//     }
//     cout<<count;
// }
// ___________________________________________________________________________

// reverse a number.
// int main(){
//     int n;
//     cout<<"Enter n: "<<endl;
//     cin>>n;

//     int rev=0;
//     while(n!=0){
//         rev=(rev*10)+(n%10);
//         n=n/10;
//     }
//     cout<<rev<<endl;

// }

// ____________________________________________________________________________

// check whether the number is palindrome.
// int main(){
//     int n;
//     cout<<"Enter n: "<<endl;
//     cin>>n;

//     int num=n;
//     int rev=0;
//     while(n!=0){
//         rev=(rev*10)+(n%10);
//         n=n/10;
//     }
//     if(rev==num){
//         cout<<"Palindrome."<<endl;
//     }
//     else{
//         cout<<"Not."<<endl;
//     }
// }
// _____________________________________________________________________

// factorial of a number.

// int main(){
//     int n;
//     cin>>n;

//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     cout<<fact;
// }

// int main(){
//     int n;
//     cin>>n;

//     int r=0;
//     for(int i=1;i<n;i++){
//         r=(r*10)+(n%10);
//         n=n/10;
//     }
//     cout<<r;
// }

// _______________________________________________________________

// fibbonacci

// int main(){
//     int n;
//     cin>>n;

//     int a=0;
//     int b=1;
//     int c=0;

//     for(int i=1;i<=n;i++){
//         cout<<c<<",";
//         a=b;
//         b=c;
//         c=a+b;
//     }
// }
// _______________________________________________________

// perfect number;  -> divisor ka sum = same number excluding itself.   
// For example, 6 is a perfect number because its proper divisors are 1, 2, and 3, and 1 + 2 + 3 = 6.

int main(){
    int n;
    cin>>n;

    int sum = 0;

    for(int i=1;i<n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }

    if(sum == n){
        cout<<"Perfect";
    }
    else{
        cout<<"NO";
    }


}

