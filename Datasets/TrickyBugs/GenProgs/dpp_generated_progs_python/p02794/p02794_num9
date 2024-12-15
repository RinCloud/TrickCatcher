from collections import defaultdict

def dfs(node, parent, tree, colors, black_edges):
    for child in tree[node]:
        if child == parent:
            continue
        if (node, child) in black_edges or (child, node) in black_edges:
            colors[child] = 1
        else:
            colors[child] = colors[node]
        dfs(child, node, tree, colors, black_edges)

def count_ways(N, edges, M, restrictions):
    tree = defaultdict(list)
    colors = [0] * (N+1)

    for a, b in edges:
        tree[a].append(b)
        tree[b].append(a)

    black_edges = []
    for u, v in restrictions:
        black_edges.append((u, v))
        black_edges.append((v, u))

    colors[1] = 1
    dfs(1, -1, tree, colors, black_edges)

    ways = 1
    for i in range(2, N+1):
        if colors[i] == 0:
            ways *= 2

    return ways

N = int(input())
edges = []
for _ in range(N-1):
    a, b = map(int, input().split())
    edges.append((a, b))

M = int(input())
restrictions = []
for _ in range(M):
    u, v = map(int, input().split())
    restrictions.append((u, v))

print(count_ways(N, edges, M, restrictions))