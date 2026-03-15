#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &input, int target){
    // define search space
    int start=0; //start of the search space
    int end=input.size()-1; //end of the search space
    while(start<=end){
        // calc midpoint for the search space
        int mid=(start + end)/2;                    //also written as --> start + (end-start)/2

        if(input[mid] == target) return mid;

        else if(input[mid]<target){
            // discard the left of mid
            start=mid+1;
        }else{
            // discard the right of mid     
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> input {2,4,5,7,15,24,45,50};
    int target=15;
    cout<<binarySearch(input,target)<<"\n";
    return 0;
}