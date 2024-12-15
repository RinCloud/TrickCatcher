from collections import defaultdict

def dfs(v, p):
    min_amount = a[v]
    for u in graph[v]:
        if u == p:
            continue
        min_amount = min(min_amount, dfs(u, v))
    if min_amount < b[v]:
        min_amount = b[v]
    return min_amount

n, m = map(int, input().split())
a = [0] * (n+1)
b = [0] * (n+1)
graph = defaultdict(list)

for i in range(1, n+1):
    a[i], b[i] = map(int, input().split())

for _ in range(m):
    u, v = map(int, input().split())
    graph[u].append(v)
    graph[v].append(u)

ans = dfs(1, -1)
print(ans)