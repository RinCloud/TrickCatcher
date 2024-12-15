N, K = map(int, input().split())
s = input()

mod = 10**9 + 7

dp = [[0] * (N+1) for _ in range(K+1)]
dp[0][0] = 1

for i in range(K):
    for j in range(N+1):
        if s[i] == 'r':
            dp[i+1][j] += dp[i][j]
            dp[i+1][j] %= mod
            for k in range(1, N-j+1):
                dp[i+1][j+k] += dp[i][j] * k
                dp[i+1][j+k] %= mod
        else:
            for k in range(1, N-j+1):
                dp[i+1][j+k] += dp[i][j] * k
                dp[i+1][j+k] %= mod

answer = dp[K][N]
print(answer)