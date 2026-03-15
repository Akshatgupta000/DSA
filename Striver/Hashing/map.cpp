#include<bits/stdc++.h>
using namespace std;


// Map stores all the values in sorted order.  -> time complexity O(logN).

int main(){
    cout<<"Enter n: "<<endl;
    int n;
    cin>>n;

    int arr[n];
    cout<<"Enter Elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }

    int q;
    cin>>q;

    // while(q--){
    //     int number;
    //     cin>>number;

        // cout<<" - "<<mpp[number]<<endl;
    // }

    return 0;
}

// ___________________________________________________________


// unordered Map-> not in sorted order timeComplexity-> O(1).