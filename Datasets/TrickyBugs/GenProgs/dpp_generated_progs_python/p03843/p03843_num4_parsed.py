from collections import defaultdict

def dfs(node, parent, graph, colors, likes, comb):
    if likes[node]:
        colors[node] += 1
    for neighbor in graph[node]:
        if neighbor != parent:
            dfs(neighbor, node, graph, colors, likes, comb)
            colors[node] += colors[neighbor]
    comb[colors[node]] += 1

def count_combinations(N, edges, likes):
    graph = defaultdict(list)
    for a, b in edges:
        graph[a].append(b)
        graph[b].append(a)
    
    colors = [0] * (N + 1)
    comb = defaultdict(int)
    
    dfs(1, 0, graph, colors, likes, comb)
    
    result = sum(comb.values())
    return result

# parse input
N = int(input())
edges = []
for _ in range(N - 1):
    a, b = map(int, input().split())
    edges.append((a, b))
likes = list(map(int, input()))

# calculate and print the number of combinations
result = count_combinations(N, edges, likes)
print(result)