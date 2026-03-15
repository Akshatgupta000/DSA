#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int start, int mid, int end){
    vector<int> temp(end-start+1);
    int left = start, right = mid+1, index = 0;

    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp[index] = arr[left];
            index++, left++; 
        }
        else{
            
        }
    }
}

void mergeSort(int arr[],int start,int end){
    if(start==end){
        return;
    }
    int mid = start + (end-start)/2;

    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

int main(){
    int arr[] = {6,4,9,5,2,8,5,66,3,0};
    mergeSort(arr,0,9);

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}