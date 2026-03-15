#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     vector<int>v;

//     cout<<"Size: "<<v.size()<<endl;
//     cout<<"Capacity: "<<v.capacity()<<endl;

//     v.push_bacstart(1);
//      cout<<"Size: "<<v.size()<<endl;
//     cout<<"Capacity: "<<v.capacity()<<endl;
    
//     v.push_bacstart(2);
//      cout<<"Size: "<<v.size()<<endl;
//     cout<<"Capacity: "<<v.capacity()<<endl;

//     v.push_bacstart(3);
//      cout<<"Size: "<<v.size()<<endl;
//     cout<<"Capacity: "<<v.capacity()<<endl;

//     v.push_bacstart(4);
//      cout<<"Size: "<<v.size()<<endl;
//     cout<<"Capacity: "<<v.capacity()<<endl;

//     v.push_bacstart(5);
//      cout<<"Size: "<<v.size()<<endl;
//     cout<<"Capacity: "<<v.capacity()<<endl;

//     v.resize(5);
//       cout<<"Size: "<<v.size()<<endl;
//     cout<<"Capacity: "<<v.capacity()<<endl;

//     v.resize(10);
//       cout<<"Size: "<<v.size()<<endl;
//     cout<<"Capacity: "<<v.capacity()<<endl;

//     v.pop_bacstart();
//     v.pop_bacstart();
//     cout<<"Size: "<<v.size()<<endl;
//     cout<<"Capacity: "<<v.capacity()<<endl;


//     return 0;
// }

// vector are same as arrays but the only difference is
//  when we declare size in vector we can modify it but in arrays(fixed size) it is not possible.

// int main(){
//   int n;
//   cout<<"Enter array size";
//   cin>>n;

//   // int arr[n];
//   vector<int> arr(n);
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" "<<endl;
//   }
//   cout<<"size of array "<<arr.size();
//   return 0;
// }
// ____________________________________________________


// check if duplicate element is present in an array.
// int main(){
//     int n;
//     cout<<"Enter size: ";
//     cin>>n;

//     int arr[n];
//     cout<<"Enter elements: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 cout<<"Duplicate";
//                 break;
//             }
//         }
//         break;
//     }
//     cout<<"NO";
// }
// ___________________________________________________________


// copy in reverse order and store in another array.
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int brr[n];
    for(int i=0;i<n;i++){
        brr[i]=arr[n-1-i];
    }
    for(int i=0;i<n;i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
}
// ___________________________________________________________


// 
// ___________________________________________________________
