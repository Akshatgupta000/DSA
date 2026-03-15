#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){

    for(int i=0;i<n-1;i++){

        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index])
                min_index=j;
        }
            swap(arr[i],arr[min_index]);
        }
    }



int main(){
    int n=5;
    int arr[5]={2,0,1,4,3};
    selectionSort(arr,n);
    cout<<"sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
