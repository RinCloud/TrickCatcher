from collections import defaultdict

def dfs(v, parent, graph):
    max_uninity = 0
    for u in graph[v]:
        if u != parent:
            max_uninity = max(max_uninity, dfs(u, v, graph))
    return max_uninity + 1

def minimum_uninity_tree(n, edges):
    graph = defaultdict(list)
    for a, b in edges:
        graph[a].append(b)
        graph[b].append(a)
    
    return dfs(1, -1, graph) - 1

n = int(input())
edges = []
for _ in range(n-1):
    a, b = map(int, input().split())
    edges.append((a, b))

result = minimum_uninity_tree(n, edges)
print(result)