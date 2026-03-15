#include<iostream>
using namespace std;


// Taking input in an array
// int main(){
//     int arr[5];
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
// _____________________________________________________________

// int main(){
//     int n;
//     cout<<"Enter array size ";
//     cin>>n;
 
//     int arr[n];
//     cout<<"Enter the elements"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// __________________________________________________________________


// finding length of an array and printing the array
// int main(){
//     int arr[]={12,2,4,56,7,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<n<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// ____________________________________________________


// calculate sum,avg,product of all elements in an array
// int main(){
//     int n;
//     cout<<"Enter size : ";
//     cin>>n;

//     int arr[n];
//     int sum=0;
//     int product=1;

//     cout<<"Enter the elements: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         sum+=arr[i]; 
//         product*=arr[i];      
//     }
//     cout<<"sum= "<<sum<<endl;
//     cout<<"avg= "<<sum/n<<endl;
//     cout<<"product= "<<product;
// }
// _________________________________________________


// finding an element
// int main(){
//    int n;
//    int max;
//    int i;

//    cout<<"Enter size of array: ";
//    cin>>n;

//     int arr[n];
//     cout<<"Enter the elements: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<"Enter key: ";
//     cin>>max;
    
//     bool flag=false;
//     for(int i=0;i<n;i++){
//         if(arr[i]==max){
//             cout<<"Element found at indemax "<<i<<endl;
//             break;
//         }
//         else{
//             cout<<"Not found"<<endl;
//         }
//     }
// }
// _________________________________________________

// // finding max element
// int main(){
//     int n;
//     cout<<"enter size: ";
//     cin>>n;

//     int arr[n];
//     cout<<"Enter the elements: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max=arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<"max element is: "<<max;
// }


// int main(){
//     int n;
//     cout<<"Enter size: ";
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int key;
//     cout<<"Enter key: ";
//     cin>>key;

//     int ans=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             ans=i;
//         }
//     }
//     cout<<ans;
// }
// _________________________________________________

// finding min element in an array
int main(){
    int n;
    cout<<"enter size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=INT16_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
           min=arr[i];
        }
    }
     cout<<"Min element is: "<<min<<endl;;

     int secondMin=INT16_MAX;
     for(int i=0;i<n;i++){
        if(arr[i]<secondMin && arr[i]!=min){
            secondMin=arr[i];
        }
     }
     cout<<"Second min element is: "<<secondMin;
}
// _________________________________________________


// find second largest element
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max=INT16_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<"largest: "<<max<<endl;

//     int second_max=INT16_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>second_max && arr[i]!=max){
//             second_max=arr[i];
//         }
//     }
//     cout<<"Second largest: "<<second_max;
// }
// _________________________________________________


// // count the number of elements in given array greater than a given number max


// // int main(){
    
// // }