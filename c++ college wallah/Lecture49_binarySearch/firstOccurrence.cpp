#include<iostream>
#include<vector>
using namespace std;

int firstOccurrence(vector<int> &input,int target){
    int start=0;
    int end=input.size()-1;

    while(start<=end){
        int mid=start+(end-start)/2;

        if(input[mid]==target) return mid;

        else if(input[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;

}

int main(){
    vector<int> input {2,5,5,5,6,6,8,9,9,9};
    int target=5;
    cout<<firstOccurrence(input,target)<<"\n";
    return 0;
}