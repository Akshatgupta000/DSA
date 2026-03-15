#include<iostream>
#include<vector>
using namespace std;

int merge(int arr[],int start, int end, int index){
    vector<int> temp(end-start+1);
}

void mergeSort(int arr[], int start , int end){
    if(start==end){
        return;
    }

    int mid = (start + (end-start)/2);
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);

    merge(arr,start,end);
}

int main(){
    
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    return 0;
}