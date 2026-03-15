#include<iostream>
using namespace std;

int f(int n, int d){

}

int main(){
    int n;
    cin>>n;

    int no_of_digits = 0;
    int temp=n;
    while(temp>0){
        temp=temp/10;
        no_of_digits++;
    }
    
    int result=f(n, no_of_digits);
    if(result==n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}