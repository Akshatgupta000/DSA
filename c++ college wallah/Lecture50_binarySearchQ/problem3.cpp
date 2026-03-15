// Given the rotated sorted array of integers, which contains distinct elements and an integer target, 
// return the index of target if it is in the  array otherwise return -1.

#include<iostream>
#include<vector>
using namespace std;

int indexOfTarget(vector<int> &input,int target){
    int start=0;
    int end=input.size()-1;

    while(start<=end){
        int mid=start+(end-start)/2;

        if(input[mid]==target) return mid;

        if(input[mid] >= input[start]){
            if(target > input[start] and target <= input[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        else{
            if(target >= input[mid] and target <= input[end]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
}
return -1;
}

int main(){
    cout<<"ENTER SIZE OF ARRAY"<<endl;
    int n;
    cin>>n;
    cout<<"ENTER THE ELEMENTS"<<endl;

    std::vector<int> input;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        input.push_back(x);
    }
    cout<<"ENTER THE TARGET"<<endl;
    int target;
    cin>>target;
    cout<<indexOfTarget(input,target)<<"\n";
    return 0;
}