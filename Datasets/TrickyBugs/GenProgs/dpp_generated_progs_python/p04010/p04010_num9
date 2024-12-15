from collections import deque

def bfs(graph, visited, start):
    queue = deque([(start, 0)])
    visited[start] = True
    count = 0
    
    while queue:
        node, level = queue.popleft()
        count = max(count, level)
        
        for neighbor in graph[node]:
            if not visited[neighbor]:
                queue.append((neighbor, level+1))
                visited[neighbor] = True
    
    return count

def solve(n, m, edges):
    graph = {i: [] for i in range(1, n+1)}
    for a, b in edges:
        graph[a].append(b)
        graph[b].append(a)
    
    visited = [False] * (n+1)
    count = bfs(graph, visited, 1)
    
    if all(visited[1:]):
        return count
    else:
        return -1

n, m = map(int, input().split())
edges = [list(map(int, input().split())) for _ in range(m)]

print(solve(n, m, edges))