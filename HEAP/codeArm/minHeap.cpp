#include <iostream>
using namespace std;

// Function to heapify a subtree rooted with node index
void Heapify(int arr[], int index, int n) {
    int smallest = index; // Initialize smallest as root
    int left = 2 * index + 1; // left child index
    int right = 2 * index + 2; // right child index

    // If left child is smaller than root
    if (left < n && arr[left] < arr[smallest]) {
        smallest = left;
    }
    
    // If right child is smaller than smallest so far
    if (right < n && arr[right] < arr[smallest]) {
        smallest = right;
    }

    // If smallest is not root, swap and continue heapifying
    if (smallest != index) {
        swap(arr[smallest], arr[index]);
        Heapify(arr, smallest, n);
    }
}

// Function to build a Min Heap from an array
void buildMinHeap(int arr[], int n) {
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

// Main function to demonstrate Min Heap
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

    buildMinHeap(arr, n); // Build Max Heap from the array
    cout << "Max Heap: ";
    printHeap(arr, n); // Print the Max Heap

    delete[] arr; // Free allocated memory
    return 0;
}