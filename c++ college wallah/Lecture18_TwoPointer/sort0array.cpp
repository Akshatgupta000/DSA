// zeros pahley count karke fill kardenge rest places pe 1 fill kar denge.

#include<iostream>
#include<vector>
using namespace std;

    // 1 1 0 0 1 0 1 0
    // zeros_count=4
    // i=0

void sortZerosAndOnes(vector<int> &v){

    int zeros_count = 0;

    // counting zeros using for each loop.
    for(int ele:v){
        if(ele==0){
            zeros_count++;
        }
    }
    // sorting of zeros at left till i<zeros_count and after that ones will be assigned on rest places.
    for(int i=0;i<v.size();i++){
        if(i<zeros_count){
            v[i]=0;
        }
        else{
        v[i]=1;
    }
}
}
int main(){
    int n;
    cin>>n;

    vector<int> v;

    for(int i=0;i<n;i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }

    sortZerosAndOnes(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;
}