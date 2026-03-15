#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int d=2;

    // create a temp array
    int temp[d];

    // copy the first 'd' elements of the original array to the temp array
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
        }

        // shift the reamaining elements of the original array by 'd'
    for(int i=d;i<n;i++){
        arr[i-d] = arr[i];
    }

    return 0;
}