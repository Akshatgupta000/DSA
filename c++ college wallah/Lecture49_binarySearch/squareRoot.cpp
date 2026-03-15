// find the square root of the given non negative value x. Round it off to the nearest floor integer value.

#include<iostream>
using namespace std;

int sqrt(int x){
    int start=1;
    int end=x;
    int ans=-1;

    while(start<=end){
        int mid=start+(end-start)/2;
        if(mid*mid <= x){
            ans=mid;
            start=mid+1;
        } else{
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    cout<<sqrt(100);
    return 0;
}