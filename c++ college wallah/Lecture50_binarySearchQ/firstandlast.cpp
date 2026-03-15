#include<iostream>
#include<vector>
using namespace std;

int firstOccurrence(vector<int> &input,int target){
    int start=0;
    int end=input.size()-1;
    int ans=-1;

    while(start<=end){
        int mid=start+(end-start)/2;

        if(input[mid]>=target){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;

}

int lastOccurrence(vector<int> &input,int target){
     int start=0;
    int end=input.size()-1;
    int ans=-1;

    while(start<=end){
        int mid=start+(end-start)/2;

        if(input[mid]>target){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
 
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
    std::vector<int> result;

    int start=firstOccurrence(input,target);
    if(input[start] != target){
        result.push_back(-1);
        result.push_back(-1);

    }
    else{
        int end=lastOccurrence(input,target);
        result.push_back(start);
        result.push_back(end-1);
        
    }
    cout<<result[0]<<" "<<result[1]<<"\n";
    return 0;
}
