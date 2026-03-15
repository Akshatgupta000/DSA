#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(11);
    cout<<"front of q is: "<<q.front()<<endl;
    
    q.push(12);
    q.push(13); 

    cout<<"size of q: "<<q.size()<<endl;

    q.pop();
    q.pop();
    q.pop();
    
    cout<<"size of q: "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
    return 0;
}