// we use while loop when we dont know the terminating point of our loop

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0;

    int i=1;  //loop variable
    while(i<=n){
        sum+=i;
        i++;
    }

    cout<<sum<<endl;
    return 0;
}