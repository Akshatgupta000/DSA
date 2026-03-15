#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int target){
    int start = 0;
    int end = n-1;

    while(start<=end){
        int mid = start + (end-start)/2;

        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid]<target){
            start = mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    cout<<"Enter size: ";
    int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the target: ";
    int target;
    cin>>target;

    int result = binarySearch(arr,n,target);

    if(result == -1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found at index "<<result;
    }
    return 0;
}