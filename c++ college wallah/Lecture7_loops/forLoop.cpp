// we use for loop when we know the terminating point of our loop.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0;

    for(int i=0;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}