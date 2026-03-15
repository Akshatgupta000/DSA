#include<iostream>
using namespace std;

// int main(){
//     int * arr = new int[5];
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

void mem_leak(){
    int *ptr  = new int[10];
    delete ptr;

}
int main(){
    mem_leak();

    return 0;
}