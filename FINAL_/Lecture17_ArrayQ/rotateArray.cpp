#include<iostream>
using namespace std;

// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     int k=2;

//     // k can be greater then n
//     k=k%n;

//     int ansarr[5];
//     int j=0;

//     // inserting last k elements in ans arr
//     for(int i=n-k;i<n;i++){
//         ansarr[j++]=arr[i];
//     }

//     // inserting first n-k elements in ans arr
//     for(int i=0;i<=k;i++){
//         ansarr[j++]=arr[i];
//     }

//     for(int i=0;i<n;i++){
//         cout<<ansarr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

void reverse(int arr[],int start, int end){
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void rotate(int arr[],int n,int k){
    k = k%n;    //to check if k exceeds n
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);

}


int main(){
    cout<<"Enter size: ";
    int n;
    cin>>n;

    cout<<"Enter elements: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter k: ";
    int k;
    cin>>k;
    rotate(arr,n,k);


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}