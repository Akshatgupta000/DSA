
#include <iostream>
#include <vector>

using namespace std;

class MaxHeap {
private:
    vector<int> heap;

    void heapifyUp(int index) {
        while (index > 0) {
            int parentIndex = (index - 1) / 2;
            if (heap[index] > heap[parentIndex]) {
                swap(heap[index], heap[parentIndex]);
                index = parentIndex;
            } else {
                break;
            }
        }
    }

public:
    void insert(int priority) {
        heap.push_back(priority);
        heapifyUp(heap.size() - 1);
    }

    void display() {
        for (int i = 0; i < heap.size(); i++) {
            cout << heap[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int n;
    cin >> n; // Input number of jobs
    MaxHeap maxHeap;

    for (int i = 0; i < n; i++) {
        int priority;
        cin >> priority; // Input priority levels
        maxHeap.insert(priority);
    }

    maxHeap.display(); // Output the Max-Heap

    return 0;
}