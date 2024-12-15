# Getting the Input

N = int(input())

tree = [[] for _ in range(N+1)]

for _ in range(N-1):
    a, b = map(int, input().split())
    tree[a].append(b)
    tree[b].append(a)

M = int(input())

restrictions = []

for _ in range(M):
    u, v = map(int, input().split())
    restrictions.append((u,v))
	
# Calculating the Number of Ways

def dfs(node, parent, visited, black_edges):
    visited.add(node)
    total_ways = 1
    for child in tree[node]:
        if child != parent:
            if (node, child) in black_edges or (child, node) in black_edges:
                total_ways *= dfs(child, node, visited, black_edges)
            else:
                black_edges_copy = black_edges.copy()
                black_edges_copy.add((node, child))
                black_edges_copy.add((child, node))
                total_ways *= dfs(child, node, visited, black_edges_copy)
    return total_ways
	
count = 0

for i in range(2 ** (N-1)):
    black_edges = set()
    index = 0
    for j in range(N-1):
        if (i >> j) & 1:
            u, v = restrictions[index]
            black_edges.add((u, v))
            black_edges.add((v, u))
            index += 1
    visited = set()
    count += dfs(1, -1, visited, black_edges)
	
print(count)