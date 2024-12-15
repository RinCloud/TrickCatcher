from collections import defaultdict

def dfs(v, p, dist, length, pow2, graph, mod):
    dist[v] = (dist[p] + length * pow2) % mod
    for u, l in graph[v]:
        if u != p:
            dfs(u, v, l, length * 2 % mod, pow2 * 2 % mod, graph, mod)
 
N, M, Q, mod = map(int, input().split())
graph = defaultdict(list)
for _ in range(M):
    a, b, c = map(int, input().split())
    graph[a].append((b, c))
    graph[b].append((a, c))

dist = [0] * (N + 1)
dfs(1, 0, 0, 1, 1, graph, mod)

for _ in range(Q):
    s, t, r = map(int, input().split())
    if (dist[s] - dist[t]) % mod == r:
        print("YES")
    else:
        print("NO")