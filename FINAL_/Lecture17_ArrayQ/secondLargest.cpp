// #include<iostream>
// using namespace std;

// find second largest element
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<"largest: "<<max<<endl;

//     int second_max=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>second_max && arr[i]!=max){
//             second_max=arr[i];
//         }
//     }
//     cout<<"Second largest: "<<second_max<<endl;

//     int min=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     cout<<"Min: "<<min<<endl;

    // int second_min=0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]<second_min && arr[i]!=min){
    //         second_min=arr[i];
    //     }
    // }
    // cout<<"Second min: "<<second_min<<endl;
// }



#include<bits/stdc++.h>
using namespace std;
void getElements(int arr[],int n)
{
    // if(n==0 || n==1)
    //     cout<<-1<<" "<<-1<<endl;  // edge case when only one element is present in array
    sort(arr,arr+n);
    int small=arr[1];
    int large=arr[n-2];
    cout<<"Second smallest is "<<small<<endl;
    cout<<"Second largest is "<<large<<endl;
}
int main()
{
    // int arr[]={1,2,4,6,7,5};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // getElements(arr,n);
    // return 0;

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    getElements(arr,n);
    return 0;
}