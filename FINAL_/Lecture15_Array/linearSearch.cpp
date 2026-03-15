#include<iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4,5};
    int key=5;

    int ans=-1;

    for(int i=0;i<5;i++){
        if(array[i]==key){
            ans=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}