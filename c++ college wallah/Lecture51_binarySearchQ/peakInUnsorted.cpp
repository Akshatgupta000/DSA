#include<iostream>
#include<vector>
using namespace std;

int findPeak(vector<int> &input){
    int n=input.size();
    int start=0, end=input.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(mid==0){
            if(input[mid]>input[mid+1]){
                return 0;
            }else{
                return 1;
            }
        }
        else if(mid==n-1){
            if(input[mid]>input[mid-1]){
                return n-1;
            }else{
                return n-2;
            }
        }else{
            if(input[mid]>input[mid+1] and input[mid]>input[mid-1]){
                return mid;
            }else if(input[mid]>input[mid-1]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    return -1;
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
    cout<<findPeak(input)<<"\n";
    return 0;
}