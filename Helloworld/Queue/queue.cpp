// follows FIFO(first in first out).

#include<iostream>
#include<queue>
using namespace std;

void show(queue<int> QUEUE){
    queue<int> q =QUEUE;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);


    show(q);
    cout<<"size: "<<q.size()<<endl;
    cout<<"front: "<<q.front()<<endl;
    cout<<"back: "<<q.back()<<endl;

    q.pop();
    show(q);
    cout<<q.front();
}