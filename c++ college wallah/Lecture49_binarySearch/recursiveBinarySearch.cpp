#include<iostream>
#include<vector>
using namespace std;

int binarySearchRecursive(vector<int> &input,int target,int start,int end){
    /*
    time: O(logn)
    space:O(logn)
    */
    
    if(start>end) return -1;
    int mid=(start+end)/2;
    if(input[mid]==target) return mid;
    if(input[mid]<target){
        return binarySearchRecursive(input,target,mid+1,end);
    }else{
        return binarySearchRecursive(input,target,start,mid-1);
    }

}

int main(){
    int n;
    cin>>n;
    vector<int> input;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        input.push_back(x);
    }
    int target;
    cin>>target;
    cout<<binarySearchRecursive(input,target,0,n-1)<<"\n";
    return 0;
}