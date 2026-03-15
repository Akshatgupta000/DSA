#include <iostream>
#include <vector>

using namespace std;

// Function to perform DFS traversal
void DFS(int node, vector<int> adj[], vector<int>& ans, vector<bool>& visited) {
    visited[node] = true; // Mark the current node as visited
    ans.push_back(node); // Add the current node to the result

    // Explore all adjacent nodes
    for (int j = 0; j < adj[node].size(); j++) {
        if (!visited[adj[node][j]]) { // If the adjacent node is not visited
            DFS(adj[node][j], adj, ans, visited); // Recursively call DFS for the adjacent node
        }
    }
}

// Function to initiate DFS traversal from a given starting node
vector<int> dfsOfGraph(int v, vector<int> adj[]) {
    vector<bool> visited(v, false); // Vector to track visited nodes
    vector<int> ans; // Vector to store the DFS traversal order

    // Start DFS from node 0
    DFS(0, adj, ans, visited);

    return ans; // Return the DFS traversal order
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

    vector<int> dfsTraversalResult = dfsOfGraph(v, graph); // Perform DFS starting from node 0

    cout << "DFS Traversal Order: ";
    for (int node : dfsTraversalResult) {
        cout << node << " "; // Print the DFS traversal order
    }
    cout << endl;

    return 0;
}