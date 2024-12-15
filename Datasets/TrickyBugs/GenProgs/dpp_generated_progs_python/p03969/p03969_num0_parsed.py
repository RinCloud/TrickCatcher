MOD = 10^9+7

N, M, K = map(int, input().split())

adj = [[] for _ in range(N+1)]
for _ in range(M):
    a, b = map(int, input().split())
    adj[a].append(b)
    adj[b].append(a)

dp = [[0] * (K+1) for _ in range(N+1)]
dp[1][0] = 1

for i in range(1, N+1):
    for j in range(K+1):
        for v in adj[i]:
            dp[v][(j+1)%K] += dp[i][j]
            dp[v][(j+1)%K] %= MOD

ans = sum(dp[N]) % MOD
print(ans)