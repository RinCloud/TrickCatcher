N = int(input())
h = list(map(int, input().split()))

MOD = 10**9+7

dp = [[0]*2 for _ in range(N+1)]
dp[0][0] = 1

for i in range(1, N+1):
    for j in range(2):
        for k in range(2):
            if j == k:
                dp[i][j] += dp[i-1][k]
            else:
                if h[i-1] > 1:
                    dp[i][j] += dp[i-1][k] * (h[i-1]-1)
            dp[i][j] %= MOD

result = (dp[N][0] + dp[N][1]) % MOD
print(result)