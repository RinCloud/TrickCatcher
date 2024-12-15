def dfs(v, p):
    global mod, G, dp, size
    dp[v] = 1
    size[v] = 1
    for u in G[v]:
        if u == p:
            continue
        dfs(u, v)
        dp[v] = dp[v] * dp[u] % mod
        dp[v] = dp[v] * f[size[u]] % mod
        dp[v] = dp[v] * rev[size[u]+1] % mod
        size[v] += size[u]
    dp[v] = dp[v] * f[size[v]-1] % mod

def solve(N, edges):
    global mod, G, dp, f, rev, size
    f = [1] * (N+1)
    rev = [1] * (N+1)
    for i in range(2, N+1):
        f[i] = f[i-1] * i % mod
        rev[i] = pow(f[i], mod-2, mod)
    G = [[] for _ in range(N+1)]
    for a, b in edges:
        G[a].append(b)
        G[b].append(a)
    dp = [0] * (N+1)
    size = [0] * (N+1)
    dfs(1, -1)
    return dp[1]

mod = int(1e9)+7

N = int(input())
edges = []
for _ in range(N-1):
    a, b = map(int, input().split())
    edges.append((a, b))

ans = [0] * (N+1)
for k in range(1, N+1):
    edges.remove((k, edges[k-1][1]))
    ans[k] = solve(N, edges)
    edges.append((k, edges[k-1][1]))

for k in range(1, N+1):
    print(ans[k])