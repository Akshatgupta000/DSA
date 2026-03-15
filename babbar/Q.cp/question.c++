#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0 and n%n==0){
            cout<<"prime numbers"<<n<<endl;
        }
    }
    return 0;
}