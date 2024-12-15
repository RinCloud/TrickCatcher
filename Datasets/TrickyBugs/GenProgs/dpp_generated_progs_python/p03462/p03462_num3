N, K = map(int, input().split())
s = input()

mod = 10**9 + 7

dp = [[0] * (N + 1) for _ in range(K + 1)]
dp[0][0] = 1

for i in range(1, K + 1):
    if s[i - 1] == 'r':
        for j in range(N + 1):
            for k in range(0, j + 1):
                dp[i][j] = (dp[i][j] + dp[i - 1][k]) % mod
    else:
        for j in range(N + 1):
            for k in range(j, N + 1):
                dp[i][j] = (dp[i][j] + dp[i - 1][k]) % mod

ans = sum(dp[K]) % mod
print(ans)