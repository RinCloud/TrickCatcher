from collections import defaultdict

def dfs(v, visited, graph, color):
    visited[v] = True
    black_count = 0
    
    for neighbor in graph[v]:
        if not visited[neighbor]:
            if color[neighbor] == 1:
                color[neighbor] = 0
                black_count += 1
            else:
                color[neighbor] = 1

            black_count += dfs(neighbor, visited, graph, color)
    
    return black_count

def solve(N, M, edges):
    graph = defaultdict(list)
    
    for a, b in edges:
        graph[a].append(b)
        graph[b].append(a)
    
    visited = [False] * (N+1)
    color = [0] * (N+1)
    color[1] = 1
    
    black_count = dfs(1, visited, graph, color)
    
    if black_count == N:
        return black_count - 1
    else:
        return -1

# Getting the input
N, M = map(int, input().split())
edges = []
for _ in range(M):
    a, b = map(int, input().split())
    edges.append((a, b))

# Solving the problem and printing the output
print(solve(N, M, edges))