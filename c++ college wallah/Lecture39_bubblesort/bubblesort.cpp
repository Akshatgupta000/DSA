// repeatedly swap 2 adjacent elements if in wrong order.

#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,3,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
        }
    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}