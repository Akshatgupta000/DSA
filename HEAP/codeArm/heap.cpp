/*
HEAP
It is a complete binary tree
->All levels are completely filled except the last level
->At last level, nodes should be filled from left side.
*/


/*Two types of Heap
->MAX heap = parent node should be greater than or equal to its child node. (for all node)
->MIN heap = parent node should be less than or equal to its child node.    (for all node)

*/

#include<iostream>
using namespace std;

class MaxHeap{
    int * arr;
    int size; //total elements present in heap
    int capacity; //total size of array

    public:

    MaxHeap(int n){
        arr = new int[n];
        size = 0;
        capacity = n;
    }

    // insert into the heap

    void insert(int value){
        //if heap size is available or not
        if(size == capacity){
            cout<<"Heap overflow";
            return;
        }

        arr[size] = value;  //insertion from the end.
        int index = size;
        size++;

        //compare with its parent
        while(index>0 && arr[(index-1)/2]<arr[index]){
            swap(arr[index],arr[(index-1)/2]);
            index = (index-1)/2;
        }

        cout<<arr[index]<<" is inserted into the heap"<<endl;
    }

    void Heapify(int index){        //here index is root.
        int largest = index;
        int left = 2*index+1;
        int right = 2*index+2;

        //Largest will store the index of the element which is greater between the parent, left child and right child.

        if(left<size && arr[left]>arr[largest]){
            largest = left;
        }
        if(right<size && arr[right]>arr[largest]){
            largest = right;
        }

        if(largest!=index){
            swap(arr[index],arr[largest]);
            Heapify(largest);
        }
    }

    void Delete(){
        if(size==0){
            cout<<"Heap Underflow";
        }
        cout<<arr[0]<<" deleted from the heap"<<endl;
        arr[0] = arr[size-1];
        size--;

        if(size==0)
        return;

        Heapify(0);
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
};

int main(){
    MaxHeap H1(10);
    H1.insert(10);
    H1.insert(12);
    H1.insert(14);

    H1.print();

    H1.Delete();

    H1.print();
    return 0;
}