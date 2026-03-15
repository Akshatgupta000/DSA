//A rotated sorted array is a array on which rotation operation has been performed some number of times given or rotated sorted array.
//find the index of the minimum element in the array follows zero based index. It is guaranteed that all the elements in the array are unique.
#include<iostream>
#include<vector>
using namespace std;

int findminimumInSortedRotated(vector<int> &input){
    if(input.size() == 1) return input[0];
    int start=0;
    int end=input.size()-1;
    if(input[start] < input[end]){      //sorted array
        return start;
    }
    while(start<=end){
        int mid=start+(end-start)/2;
        if(input[mid] > input[mid+1]) return mid+1;
        if(input[mid] < input[mid-1]) return mid;

        if(input[mid]>input[start]){
            start=mid+1;
        }
        else{
            end=mid-1;
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
   cout<<findminimumInSortedRotated(input)<<"\n";

    return 0;
}