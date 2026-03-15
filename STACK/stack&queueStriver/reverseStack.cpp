#include<iostream>
#include<iomanip>
#include<stack>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    stack<char> st;

    for(char ch: s){
        st.push(ch);
    }

    string reversed;
    while(!st.empty()){
        reversed = reversed+st.top();
        st.pop();
    }

    cout<<reversed;


    return 0;
}