#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &input,int target){
    int n=input.size(); //no. of rows
    int m=input[0].size(); //no. of columns

    int start=0, end=n*m-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        int x=mid/m;
        int y=mid%m;
        if(input[x][y] == target){
            return true;
        }else if(input[x][y] < target){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> input={{1,3,5,7}, {10,11,16,20}, {23,30,34,60}};
    int target=16;
    cout<<searchMatrix(input,target)<<"\n";
    return 0;
}