// priority queue-> it is a special container such that first element of queue is greatest of all element. 
// elements are in non increasing order.
// by default c++ creates a max heap for priority queue.

#include<iostream>
#include<queue>
using namespace std;

void showPriorityQueue(priority_queue<int> pq){
    priority_queue<int> q = pq;
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main(){
    priority_queue<int> q;
    q.push(10);
    q.push(-2);
    q.push(20);
    q.push(-5);

    showPriorityQueue(q);
    cout<<q.size()<<endl;

    q.pop();
    showPriorityQueue(q);
    return 0;
}