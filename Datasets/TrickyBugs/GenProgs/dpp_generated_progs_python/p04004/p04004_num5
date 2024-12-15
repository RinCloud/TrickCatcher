from collections import deque

N, M, K = map(int, input().split())

mod = 10**9 + 7

# calculate the number of ways to choose initial cards for each player
num_ways = pow(3, N + M + K, mod) 

# calculate the number of ways that Alice wins
# using dynamic programming
dp = [[0] * (K + 1) for _ in range(M + 1)]
dp[M][K] = 1

for i in range(M, -1, -1):
    for j in range(K, -1, -1):
        if i < M:
            dp[i][j] += (dp[i + 1][j] * 2) % mod
        if j < K:
            dp[i][j] += (dp[i][j + 1] * 2) % mod
        if i < M and j < K:
            dp[i][j] -= dp[i + 1][j + 1]
        dp[i][j] %= mod

answer = (num_ways - dp[0][0] + mod) % mod
print(answer)