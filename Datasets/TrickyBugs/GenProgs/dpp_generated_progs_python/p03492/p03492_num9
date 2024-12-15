from collections import defaultdict

MOD = 10**9 + 7

def dfs(v, p):
    res = 0
    for u in graph[v]:
        if u == p:
            continue
        res += dfs(u, v)
    return dp[v][p] % MOD

N = int(input())
graph = defaultdict(list)
dp = [[0] * (N+1) for _ in range(N+1)]

for _ in range(N-1):
    x, y = map(int, input().split())
    graph[x].append(y)
    graph[y].append(x)

for v in range(1, N+1):
    for w in graph[v]:
        dp[v][w] = dfs(w, v)

ans = 0
for v in range(1, N+1):
    for w in graph[v]:
        ans = (ans + dp[v][w] + 1) % MOD

print(ans)