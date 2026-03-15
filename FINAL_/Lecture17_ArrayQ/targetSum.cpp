// find the total number of pairs in the array whose sum is equal to the given value x.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target: ";
    cin>>target;

    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                sum++;
            }
        }
    }
    cout<<sum;
}