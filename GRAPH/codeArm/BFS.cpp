#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// Function to perform BFS traversal of the graph
vector<int> bfsOfGraph(int v, vector<int> adj[]) {
    queue<int> q; // Queue for BFS
    vector<bool> visited(v, false); // Vector to track visited nodes
    vector<int> ans; // Vector to store the BFS traversal order

    // Start BFS from node 0
    q.push(0);
    visited[0] = true;

    while (!q.empty()) {
        int node = q.front(); // Get the front node
        q.pop(); // Remove it from the queue
        ans.push_back(node); // Add it to the result

        // Explore all adjacent nodes
        for (int j = 0; j < adj[node].size(); j++) {
            int adjacentNode = adj[node][j];
            if (!visited[adjacentNode]) { // If not visited
                visited[adjacentNode] = true; // Mark as visited
                q.push(adjacentNode); // Enqueue it for exploration
            }
        }
    }
    return ans; // Return the BFS traversal order
}

int main() {
    int v, e;
    cout << "Enter number of vertices: ";
    cin >> v;

    cout << "Enter number of edges: ";
    cin >> e;

    vector<int> graph[v]; // Adjacency list representation of the graph

    cout << "Enter edges (source destination):" << endl;
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v); // Add edge from u to v
        graph[v].push_back(u); // Add edge from v to u (undirected graph)
    }

    vector<int> bfsTraversalResult = bfsOfGraph(v, graph); // Perform BFS starting from node 0

    cout << "BFS Traversal Order: ";
    for (int i : bfsTraversalResult) {
        cout << i << " "; // Print the BFS traversal order
    }
    cout << endl;

    return 0;
}