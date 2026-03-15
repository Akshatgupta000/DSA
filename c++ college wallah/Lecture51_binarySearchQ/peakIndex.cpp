#include<iostream>
#include<vector>
using namespace std;

int peakInMountainArray(vector<int> &input){
    int start=1, end=input.size()-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(input[mid] > input[mid-1]){
            // inc curve
            ans=max(ans,mid);
            start=mid+1;
        } else{
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    cout<<"Enter the size of array: "<<endl;
    vector<int> input;
    int n;
    cin>>n;
    cout<<"Enter the elments: "<<endl;
    while(n--){
        int x;
        cin>>x;
        input.push_back(x);
    }
    cout<<peakInMountainArray(input)<<"\n";
    return 0;
}