MOD = int(1e9+7)

def dfs(i, j):
    if i == n: return j == 0
    
    if dp[i][j] != -1: return dp[i][j]
    
    ans = 0
    for k in range(k):
        for edge in edges[i]:
            u, v = edge
            if (j >> u & 1) and (j >> v & 1):
                ans = (ans + dfs(i+1, j ^ (1<<u) ^ (1<<v) ^ (1<<k))) % MOD
    
    dp[i][j] = ans
    return ans

n, m, k = map(int, input().split())
edges = [[] for _ in range(n)]
for _ in range(m):
    a, b = map(int, input().split())
    edges[a-1].append((a-1, b-1))
    edges[b-1].append((b-1, a-1))

dp = [[-1] * (1<<n) for _ in range(m+1)]
print(dfs(0, (1<<n)-1))