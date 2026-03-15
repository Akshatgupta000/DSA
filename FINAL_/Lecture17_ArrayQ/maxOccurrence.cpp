#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxCount=0;
    int maxOccurrence;

    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxCount){
            maxCount=count;
            maxOccurrence=arr[i];
        }
    }
    cout<<"Max occ:"<<maxOccurrence;
    return 0;
}