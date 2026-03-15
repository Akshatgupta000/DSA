#include<iostream>
using namespace std;

class Vector{
    public:
    int size;
    int capacity;
    int* arr;

    Vector(){   //default constructor.
        size = 0;
        capacity = 1;
        arr = new int[1];
    }

    void add(int element){
        if(size == capacity){
            capacity = capacity*2; //double the size of array if FULL 
            int* arr2 = new int[capacity];
            for(int i=0;i<size;i++){
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size] = element;
        size++;
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Vector v;
    v.add(10);
    v.print();

    v.add(20);
    v.print();

    v.add(30);
    v.print();

    v.add(40);
    v.print();

    v.add(50);
    v.print();


    
    return 0;
}