N, X, D = map(int, input().split())

moto = [0] * (N+1)
parent = [0] * (N+1)

for i in range(1, N+1):
    m, p = map(int, input().split())
    moto[i] = m
    parent[i] = p

dp = [[-float('inf')] * (X+1) for _ in range(N+1)]
dp[0][0] = 0

for i in range(1, N+1):
    for j in range(X+1):
        dp[i][j] = max(dp[i][j], dp[i-1][j])
        if j >= moto[i]:
            dp[i][j] = max(dp[i][j], dp[i-1][j-moto[i]] + 1)
        if j >= moto[parent[i]] + D:
            dp[i][j] = max(dp[i][j], dp[i][j-moto[parent[i]]-D] + 1)

print(max(dp[N]))