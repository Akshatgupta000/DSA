#include<iostream>
#include<string>
#include<stack>
#include<algorithm>

using namespace std;

string removeDuplicates(string s){
    int n=s.size(), i=0;     //get the size of string, initialise i=0
    stack<char> st;      //create a stack of char string

    while(i<n){
        if(st.empty() || st.top() != s[i]){     //if stack is empty or the top element is not equal to input index element push the element
            st.push(s[i]);
        }
        else{       //else just remove the element
            st.pop();
        }
        i++;        //++ to the next element
    }

    // create a string ans.
    string ans;
    while(!st.empty()){     //while the stack is not empty insert the top element in char ele 
        char ele=st.top();
        st.pop();

        ans+=ele;
    }

    reverse(ans.begin(),ans.end());     //reverse the stack as stack is (LIFO) we will make it queue (FIFO)
    return ans;


}

int main(){
    string s = "abbaca";
    string result = removeDuplicates(s);
    cout << result << endl;
    return 0;
}