#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"Enter size: ";
   cin>>n;

   int arr[n];
   cout<<"Enter element: ";
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }

    int sum=0;
    int difference=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        difference-=arr[i];

    }
    cout<<"sum: "<<sum<<endl;
    cout<<"difference: "<<difference<<endl;
    return 0;
}