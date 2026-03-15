#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cin>>target;

    int result = -1;
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            result = i;
            break;
        }
    }

    if(result == -1){
        cout<<"Not found";
    }
    else{
        cout<<"Element found at index: "<<result;
    }
    return 0;
}