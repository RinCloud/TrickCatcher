from collections import defaultdict

def bfs(graph, start):
    visited = set()
    queue = [start]
    visited.add(start)
    while queue:
        node = queue.pop(0)
        for neighbor in graph[node]:
            if neighbor not in visited:
                visited.add(neighbor)
                queue.append(neighbor)
    return visited

def solve(N, M, edges):
    graph = defaultdict(list)
    for a, b in edges:
        graph[a].append(b)
        graph[b].append(a)
    
    white_count = bfs(graph, 1)
    black_count = N - len(white_count)
    
    if black_count == 0:
        return 0
    if black_count == N:
        return -1
    
    return black_count - 1

N, M = map(int, input().split())
edges = [tuple(map(int, input().split())) for _ in range(M)]

result = solve(N, M, edges)
print(result)