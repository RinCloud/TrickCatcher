n, m = map(int, input().split())
graph = [[] for _ in range(n+1)]
for _ in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

def dfs(u, parent):
    global counter
    low[u] = ids[u] = counter
    counter += 1
    for v in graph[u]:
        if ids[v] == 0:
            dfs(v, u)
            low[u] = min(low[u], low[v])
            if ids[u] < low[v]:
                bridges.append((u, v))
        elif v != parent:
            low[u] = min(low[u], ids[v])

low = [0] * (n+1)
ids = [0] * (n+1)
counter = 1
bridges = []
dfs(1, -1)

print(len(bridges))