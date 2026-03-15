#include<stdio.h>

// sorting in ascending
// int main(){
//     int n;
//     scanf("%d",&n);

//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }

// ______________________________________________________________

// sorting in descending

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