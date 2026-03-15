#include<iostream>
using namespace std;

// reverse part 
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start;
    cout<<"Enter start: ";
    cin>>start;

    // int end;
    // cout<<"Enter end: ";
    // cin>>end;

    int i=start;
    // int j=end;
    int j=n-1;

    while(i<j){
        // swap(arr[i],arr[j]);
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}