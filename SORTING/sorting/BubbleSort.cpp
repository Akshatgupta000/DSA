#include<iostream>
using namespace std;

// sorting in ascending order
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                // swap(arr[j],arr[j+1]);
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    // ASCENDING
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    // DESCENDING
    // for(int i=n-1;i>=0;i--){
    //     cout<<arr[i]<<" ";
    // }
    return 0;
}

// _________________________________________________________________

// sorting in descending order
// int main(){
//     int n;
//     scanf("%d",&n);

//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]<arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }