#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter first array size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter first array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int m;
    cout<<"Enter second array size: ";
    cin>>m;

    int array[m];
    cout<<"Enter second array elements: ";
    for(int i=0;i<m;i++){
        cin>>array[i];
    }

    int mergedArr[n+m];
    
    for(int i=0;i<n;i++){
        mergedArr[i]=arr[i];
    }

    for(int i=0;i<m;i++){
        mergedArr[n+i]=array[i];
    }

    for(int i=0;i<n+m;i++){
        cout<<mergedArr[i]<<" ";
    }
    return 0;
}