#include<iostream>
#include<stack>
using namespace std;

void deleteMiddle(stack<int>& s,int n, int curr=0){
    // base case
    if (s.empty() || curr == n / 2){
        s.pop();
        return;
    }
    int x=s.top();
    s.pop();

    deleteMiddle(s,n,curr+1);
    s.push(x);
}

int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    int n = s.size();
    deleteMiddle(s, n);

    cout << "Stack after deleting middle element: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}

