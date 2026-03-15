#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> bfsOfGraph(int v, vector<int> adj[]) {
    queue<int> q;
    vector<bool> visited(v, false);
    vector<int> ans;

    q.push(0);
    visited[0] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for (int j = 0; j < adj[node].size(); j++) {
            int adjacentNode = adj[node][j];
            if (!visited[adjacentNode]) {
                visited[adjacentNode] = true;
                q.push(adjacentNode);
            }
        }
    }
    return ans;
}

int main() {
    int v, e;
    cin >> v >> e;

    vector<int> graph[v];

    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<int> bfsTraversalResult = bfsOfGraph(v, graph);

    for (int i : bfsTraversalResult) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
