from collections import defaultdict

def dfs(v, p, g, dp):
    dp[v] = 1

    for u in g[v]:
        if u == p:
            continue
        dfs(u, v, g, dp)
        dp[v] = (dp[v] * (dp[u]+1)) % (10**9 + 7)

def solve(N, edges):
    g = defaultdict(list)
    for a, b in edges:
        g[a].append(b)
        g[b].append(a)
    dp = [0] * (N+1)
    dfs(1, 0, g, dp)
    return dp

N = int(input())
edges = [tuple(map(int, input().split())) for _ in range(N-1)]
ans = solve(N, edges)
for a in ans[1:]:
    print(a)