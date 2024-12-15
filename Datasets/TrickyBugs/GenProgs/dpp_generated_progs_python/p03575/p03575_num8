from collections import defaultdict

def find_bridges(graph):
    n = len(graph)
    visited = [False] * n
    low = [float('inf')] * n
    parent = [-1] * n
    bridges = []

    def dfs(u):
        nonlocal bridges
        visited[u] = True
        low[u] = u
        for v in graph[u]:
            if not visited[v]:
                parent[v] = u
                dfs(v)
                low[u] = min(low[u], low[v])
                if low[v] > visited[u]:
                    # u-v is a bridge
                    bridges.append((u, v))
            elif v != parent[u]:
                low[u] = min(low[u], visited[v])

    for u in range(n):
        if not visited[u]:
            dfs(u)

    num_bridges = len(bridges)
    return num_bridges

# Read input
N, M = map(int, input().split())
graph = defaultdict(list)
for _ in range(M):
    a, b = map(int, input().split())
    graph[a-1].append(b-1)
    graph[b-1].append(a-1)

# Find the number of bridges
num_bridges = find_bridges(graph)

# Print the result
print(num_bridges)