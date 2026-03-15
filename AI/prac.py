import heapq

def heuristic(node, goal):
    return abs(node - goal)

def a_star_search(v, adj, start, goal):
    pq = []
    heapq.heappush(pq, (0, start))
    came_from = {start: None}
    cost_so_far = {start: 0}

    while pq:
        _, current = heapq.heappop(pq)
        
        if current == goal:
            break
        
        for neighbor in adj[current]:
            new_cost = cost_so_far[current] + 1
            if neighbor not in cost_so_far or new_cost < cost_so_far[neighbor]:
                cost_so_far[neighbor] = new_cost
                priority = new_cost + heuristic(neighbor, goal)
                heapq.heappush(pq, (priority, neighbor))
                came_from[neighbor] = current
    
    path = []
    node = goal
    while node is not None:
        path.append(node)
        node = came_from.get(node, None)
    
    return path[::-1]

def main():
    v, e = map(int, input().split())
    graph = [[] for _ in range(v)]
    
    for _ in range(e):
        u, v = map(int, input().split())
        graph[u].append(v)
        graph[v].append(u)
    
    start, goal = map(int, input().split())
    path = a_star_search(v, graph, start, goal)
    print(" ".join(map(str, path)))

if __name__ == "__main__":
    main()
