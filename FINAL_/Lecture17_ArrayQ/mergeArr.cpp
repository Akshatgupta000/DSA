#include <iostream>

using namespace std;

void mergeArrays(int arr1[], int arr2[], int n1, int n2, int mergedArr[]) {
    int i = 0, j = 0, k = 0;

    // Traverse both arrays and merge them in sorted order
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1, if any
    while (i < n1) {
        mergedArr[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2, if any
    while (j < n2) {
        mergedArr[k++] = arr2[j++];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergedArr[n1 + n2];

    mergeArrays(arr1, arr2, n1, n2, mergedArr);

    cout << "Merged array: ";
    printArray(mergedArr, n1 + n2);

    return 0;
}