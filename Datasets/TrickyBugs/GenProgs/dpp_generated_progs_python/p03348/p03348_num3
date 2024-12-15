import collections

def dfs(graph, v, parent, colors):
    color = 1
    for u in graph[v]:
        if u == parent:
            continue
        while color == colors[v] or (parent != -1 and colors[parent] == color):
            color += 1
        colors[u] = color
        dfs(graph, u, v, colors)
        color += 1

def tree_colorfulness(N, edges):
    graph = collections.defaultdict(list)
    for a, b in edges:
        graph[a].append(b)
        graph[b].append(a)
    
    colors = [0] * (N+1)
    colors[1] = 1
    dfs(graph, 1, -1, colors)
    
    colorfulness = max(colors)
    leaves = sum(1 for c in colors if c == colorfulness and len(graph[c]) == 1)
    
    return colorfulness, leaves

# Read input
N = int(input())
edges = [list(map(int, input().split())) for _ in range(N-1)]

# Compute and print the minimum possible colorfulness and the minimum number of leaves
colorfulness, leaves = tree_colorfulness(N, edges)
print(colorfulness, leaves)