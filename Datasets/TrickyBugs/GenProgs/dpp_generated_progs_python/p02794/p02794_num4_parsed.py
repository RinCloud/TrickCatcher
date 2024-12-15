from collections import defaultdict

def dfs(v, parent, tree, black):
    count = 1
    for u in tree[v]:
        if u == parent:
            continue
        count *= dfs(u, v, tree, black)
    if black[v] == 1:
        count *= sum(black[u] for u in tree[v] if u != parent)
    return count

def solve(N, edges, M, restrictions):
    tree = defaultdict(list)
    for a, b in edges:
        tree[a].append(b)
        tree[b].append(a)
    black = [0] * (N+1)
    for u, v in restrictions:
        black[u] = 1
        black[v] = 1
    return dfs(1, 0, tree, black)

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

result = solve(N, edges, M, restrictions)
print(result)