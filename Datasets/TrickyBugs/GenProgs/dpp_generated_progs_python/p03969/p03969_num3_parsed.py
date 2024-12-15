MOD = 10**9 + 7

N, M, K = map(int, input().split())

adj = [[] for _ in range(N+1)]
for _ in range(M):
    a, b = map(int, input().split())
    adj[a].append(b)
    adj[b].append(a)

dp = [[0] * (K+1) for _ in range(N+1)]

def dfs(v, c):
    if dp[v][c] != 0:
        return dp[v][c]
    
    dp[v][c] = 1
    for u in adj[v]:
        if c == 1:
            dp[v][c] *= (K-1) * dfs(u, 0)
        else:
            dp[v][c] *= (K-2) * dfs(u, 0) + dfs(u, 1)
        dp[v][c] %= MOD
    
    return dp[v][c]

ans = (K * dfs(1, 0)) % MOD

print(ans)