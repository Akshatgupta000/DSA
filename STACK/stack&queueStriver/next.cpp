#include <iostream>
using namespace std;

int main() {
    // Sample input array
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // Iterate through each element
    for (int i = 0; i < n; i++) {
        int nextGreater = -1; // Initialize next greater as -1

        // Check for the next greater element on the right
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j]; // Found the next greater element
                break; // Break out of the inner loop
            }
        }

        // Print the result for the current element
        cout << arr[i] << " --> " << nextGreater << endl;
    }

    return 0;
}