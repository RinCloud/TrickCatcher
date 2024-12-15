from collections import deque

n, m = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(m)]

adj = [[] for _ in range(n)]
for x, y in a:
    adj[x-1].append(y-1)
    adj[y-1].append(x-1)

bridge_count = 0
visited = [False] * n
earliest_reachable = [float("inf")] * n
depth = [0] * n

def dfs(v, parent):
    visited[v] = True
    earliest_reachable[v] = depth[v]
    for u in adj[v]:
        if not visited[u]:
            depth[u] = depth[v] + 1
            dfs(u, v)
            earliest_reachable[v] = min(earliest_reachable[v], earliest_reachable[u])
            if earliest_reachable[u] > depth[v]:
                bridge_count += 1
        elif u != parent:
            earliest_reachable[v] = min(earliest_reachable[v], depth[u])

for i in range(n):
    if not visited[i]:
        dfs(i, -1)

print(bridge_count)
