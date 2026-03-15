#include <iostream>
using namespace std;

int deleteElement(int arr[], int n, int x) {
    // Traverse the array to find the element
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            break;
        }
    }

    // If element is not found, return the original array
    if (i == n) {
        return n;
    }

    // Shift all elements from index i+1 to n-1 to one position left
    for (int j = i; j < n - 1; j++) {
        arr[j] = arr[j + 1];
    }

    // Reduce the size of array by one
    return (n - 1);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the element to be deleted: ";
    cin >> x;

    n = deleteElement(arr, n, x);

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}