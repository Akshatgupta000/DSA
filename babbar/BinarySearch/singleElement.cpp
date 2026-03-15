#include<iostream>
using namespace std;

int main(){
    cout<<"Enter size: ";
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]==arr[j]){

            }
            else{
                cout<<arr[i];
            }
        }
    }
    return 0;
}