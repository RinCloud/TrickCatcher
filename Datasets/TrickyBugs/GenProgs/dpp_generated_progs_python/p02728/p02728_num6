import sys
sys.setrecursionlimit(10**6)
from collections import defaultdict

MOD = 10**9 + 7

def dfs(v, p, g, dp):
    dp[v] = 1
    for u in g[v]:
        if u == p:
            continue
        dfs(u, v, g, dp)
        dp[v] *= dp[u]
        dp[v] %= MOD
    dp[v] *= dp[p]
    dp[v] %= MOD

def solve(N, edges):
    g = defaultdict(list)
    for a, b in edges:
        g[a].append(b)
        g[b].append(a)

    dp = [0] * (N + 1)
    dfs(1, 0, g, dp)

    res = [0] * (N + 1)
    res[1] = dp[1]
    for i in range(2, N + 1):
        res[i] = res[i - 1] * i
        res[i] %= MOD
    for i in range(1, N + 1):
        ans = res[N - 1] * pow(res[i - 1], MOD - 2, MOD)
        ans %= MOD
        ans *= pow(dp[i], MOD - 2, MOD)
        ans %= MOD
        print(ans)

# parse input
N = int(input())
edges = []
for _ in range(N - 1):
    a, b = map(int, input().split())
    edges.append((a, b))

# solve the problem
solve(N, edges)