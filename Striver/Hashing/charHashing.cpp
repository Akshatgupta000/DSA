#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){

    // to access ASCII value.
    // int x = 'a';
    // cout<<x;

    string s;
    cin>>s;

    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<" - "<<hash[c];
    }
    return 0;
}