#include <iostream>
using namespace std;

// Function to compute the reachability matrix using Warshall's Algorithm
void warshall_algorithm(int matrix[][100], int n) {
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                // If there is a path from i to k and from k to j, then there is a path from i to j
                if (matrix[i][k] && matrix[k][j]) {
                    matrix[i][j] = 1;
                }
            }
        }
    }
}

// Function to print the reachability matrix
void print_matrix(int matrix[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    
    // Input number of vertices
    cout << "Enter the number of vertices: ";
    cin >> N;

    // Initialize adjacency matrix
    int graph[100][100] = {0}; // Assuming a maximum of 100 vertices

    // Input adjacency matrix
    cout << "Enter the adjacency matrix:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> graph[i][j];
        }
    }

    // Input vertices u and v
    int u, v;
    cout << "Enter two vertices (u and v): ";
    cin >> u >> v;

    // Compute reachability using Warshall's Algorithm
    warshall_algorithm(graph, N);

    // Print the reachability matrix
    cout << "\nReachability Matrix:" << endl;
    print_matrix(graph, N);

    // Check if there is a path from u to v
    if (graph[u][v] == 1) {
        cout << "Path Exists" << endl;
    } else {
        cout << "Path does not Exist" << endl;
    }

    return 0;
}