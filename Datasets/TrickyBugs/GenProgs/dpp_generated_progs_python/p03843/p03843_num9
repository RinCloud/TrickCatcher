from collections import defaultdict

def dfs(v, d):
    visited[v] = True
    colors[v] = True

    for u in adj[v]:
        if not visited[u]:
            if d > 0 or favorite[u] == 1:
                dfs(u, d-1)

N = int(input())
adj = defaultdict(list)
favorite = list(map(int, input()))

for _ in range(N-1):
    a, b = map(int, input().split())
    adj[a].append(b)
    adj[b].append(a)

colors = [False] * (N+1)
visited = [False] * (N+1)

dfs(favorite.index(1)+1, 0)

print(sum(colors))