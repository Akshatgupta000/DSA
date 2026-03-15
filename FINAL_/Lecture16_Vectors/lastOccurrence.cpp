#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(6);
    cout<<"Enter the elements: ";

    for(int i=0;i<6;i++){
        cin>>v[i];
    }

    cout<<"Enter x: ";
    int x;
    cin>>x;

    int occurrence;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurrence=i;
        }
    }

    // We can also find the last occurrence of an element by traversing from the last index.
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            occurrence=i;
        }
    }
    cout<<occurrence<<endl;
    return 0;
}