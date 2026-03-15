//Series-> 1 - 2 + 3 - 4 + 5 ...n

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;


    int result=0;
    for(int i=0;i<=n;i++){
        
        if(i%2==0){  //even
            result-=i;
        }
        else{        //odd
            result+=i;
        }
    }
    cout<<result<<endl;
    return 0;
}