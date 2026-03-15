#include <iostream>
using namespace std;

// Function to heapify a subtree rooted with node index
void Heapify(int arr[], int index, int n) {
    int largest = index; // Initialize largest as root
    int left = 2 * index + 1; // Left child index
    int right = 2 * index + 2; // Right child index

    // If left child is greater than root
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    
    // If right child is greater than largest so far
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    // If largest is not root, swap and continue heapifying
    if (largest != index) {
        swap(arr[index], arr[largest]);
        Heapify(arr, largest, n);
    }
}

// Function to build a Max Heap from an array
void buildMaxHeap(int arr[], int n) {
    // Step down approach
    for (int i = n / 2 - 1; i >= 0; i--) {
        Heapify(arr, i, n);
    }
}

// Function to print the elements of the heap
void printHeap(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;

    cout << "Enter the number of elements in the heap: ";
    cin >> n;

    int* arr = new int[n]; // Dynamically allocate memory for the array
    // int arr[n];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Read elements from user
    }

    buildMaxHeap(arr, n); // Build Max Heap from the array
    cout << "Max Heap: ";
    printHeap(arr, n); // Print the Max Heap

    delete[] arr; // Free allocated memory
    return 0;
}