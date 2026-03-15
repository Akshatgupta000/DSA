#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &input, int target){
    int start=0;
    int end=input.size()-1;

    while(start<=end){
        int mid=(start+end)/2;

        if(input[mid]==target) return mid;

        else if(input[mid]<target){
            //neglect the left part
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> input {3,21,4,39,554,3245,6,47};
    int target=3245;
    cout<<binarySearch(input,target)<<"\n";
    return 0;
}