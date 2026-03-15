#include<iostream>
#include<stack>
using namespace std;

int main(){
    string a="akshat";

    stack<char> s;

    for(int i=0;i<a.length();i++){
        char word=a[i];
        s.push(word);
    }

    string ans="";

    while(!s.empty()){
        char word=s.top();
        ans.push_back(word);

        s.pop();
    }
    cout<<"answer is: "<<ans<<endl;
    return 0;
}