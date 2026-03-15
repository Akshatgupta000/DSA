from collections import deque

def bfs_of_graph(v, adj):
    q = deque()
    visited = [False] * v
    ans = []

    q.append(0)
    visited[0] = True

    while q:
        node = q.popleft()
        ans.append(node)

        for adjacent_node in adj[node]:
            if not visited[adjacent_node]:
                visited[adjacent_node] = True
                q.append(adjacent_node)
    
    return ans

def main():
    v, e = map(int, input().split())
    graph = [[] for _ in range(v)]
    
    for _ in range(e):
        u, v = map(int, input().split())
        graph[u].append(v)
        graph[v].append(u)
    
    bfs_traversal_result = bfs_of_graph(v, graph)
    print(" ".join(map(str, bfs_traversal_result)))

if __name__ == "__main__":
    main()
