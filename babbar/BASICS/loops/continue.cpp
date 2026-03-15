// prints all values except 3 and 8.

#include<iostream>
using namespace std;

// int main(){
//     for(int i=1;i<=20;i++){
//         if(i!=3 && i!=8) cout<<i<<" ";
//         // if(i==3 || i==8) continue;
//         // cout<<i<<" ";
//     }
//     return 0;
// }


// WAP to print odd numbers from 1 to 20
int main(){
    for(int i=1;i<=20;i++){
        if(i%2==0) continue;
        cout<<i<<" ";
    }
}