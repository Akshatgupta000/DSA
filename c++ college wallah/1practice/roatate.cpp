#include<iostream>
#include<vector>
using namespace std;

void rotateArray(int arr[],int n, int k){
    // create a temp array to store the first k elements of original array.
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    // shift the remaining elements of the original array by k position to the left.
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }
}

int main(){
    
    return 0;
}