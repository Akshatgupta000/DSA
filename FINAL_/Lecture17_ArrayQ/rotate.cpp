#include<iostream>
using namespace std;


// int main(){
//     int n;
//     cout<<"Enter size: ";
//     cin>>n;

//     int arr[n];
//     cout<<"Enter the elements: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cout<<"Enter k: ";
//     cin>>k;
//     k=k%n;

//     int temp=arr[k];
//     for(int i=k;i<n;i++){
//         arr[i-k]=arr[i];
//     }
//     int i;
//     for(int i=n-k;i<n;i++){
//         arr[i]=temp[i];
//         i++;
//     }
//     // arr[k-n]=temp;
//     cout<<temp;
// }