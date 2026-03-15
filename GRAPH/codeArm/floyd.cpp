#include <iostream>
#include <limits>

using namespace std;

const int MAXN = 100; // Maximum number of vertices
const int INF = numeric_limits<int>::max(); // Define infinity

// Function to implement the Floyd-Warshall algorithm
void floydWarshall(int arr[][MAXN], int n) {
    // Initialize distance matrix with input values
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                // If there is a path from i to k and from k to j
                if (arr[i][k] != INF && arr[k][j] != INF) {
                    arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
                }
            }
        }
    }
}

// Function to print the distance matrix
void printMatrix(int arr[][MAXN], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == INF) {
                cout << "INF ";
            } else {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of vertices: ";
    cin >> n;

    int arr[MAXN][MAXN];

    cout << "Enter adjacency matrix (use " << INF << " for no direct edge):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            // If no edge, set it to INF except for diagonal elements
            if (arr[i][j] == 0 && i != j) {
                arr[i][j] = INF;
            }
        }
    }

    floydWarshall(arr, n);

    cout << "Shortest path matrix:" << endl;
    printMatrix(arr, n);

    return 0;
}