#include<iostream>
using namespace std;

// WAP TO COUNT DIGITS OF A NUMBER
// int main(){
//     int n;
//     cin>>n;

//     int count=0;
//     while(n!=0){
//         n=n/10;
//         count++;
//     }
//     cout<<count;
//     return 0;
// }

// WAP TO PRINT SUM OF DIGITS OF A NUMBER
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     while(n!=0){
//         int ld=n%10;
//         n=n/10;
//         sum=sum+ld;
//     }
//     cout<<sum<<endl;
// }

// WAP TO PRINT PRODUCT OF DIGITS OF A NUMBER.
// int main(){
//     int n;
//     cin>>n;
//     int product=1;
//     while(n!=0){
//         int ld=n%10;
//         n=n/10;
//         product*=ld;
//     }
//     cout<<product;
// }


int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        cout<<i<<" ";
    }
}