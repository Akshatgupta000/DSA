#include<iostream>
#define MAX 100

using namespace std;

int heap[MAX];
int heapSize = 0;

void insert(int value){
    if(heapSize>=MAX){
        cout<<"Heap is Full"<<endl;
        return;
    }

    // insert new element at the end of the heap.
    heap[heapSize] = value;
    int current = heapSize;
    heapSize++;

    // heapify the elements upwards.
    while(current > 0 && heap[(current-1)/2] < heap[current]){

        // swap the current element with root
        int temp = heap[(current-1)/2];
        heap[(current-1)/2] = heap[current];
        heap[current] = temp;

        // move upto the parent.
        current = (current-1)/2;
    }
}

int deleteMax(){
    if(heapSize <= 0){
        cout<<"heap is empty."<<endl;
        return -1;
    }

    int max = heap[0];
    heap[0] = heap[heapSize-1];
    heapSize--;

    int current = 0;
    while(current*2+1 < heapSize){
        int left = current*2+1;
        int right = current*2+2;
        int maxChild = left;

        if(right < heapSize && heap[right]> heap[left]){
            maxChild = right;
    }
    if(heap[current] >= heap[maxChild]){
        break;
    }

    int temp = heap[current];
    heap[current] = heap[maxChild];
    heap[maxChild] = temp;

    current = maxChild;
    }

    return max;
    
}

void display(){
    for(int i=0;i<heapSize;i++){
        cout<<heap[i]<<" ";
    }
    cout<<endl;
}

int main(){
    insert(50);
    insert(100);
    insert(60);
    insert(20);
    
    display();

    insert(10);

    display();
    return 0;
}