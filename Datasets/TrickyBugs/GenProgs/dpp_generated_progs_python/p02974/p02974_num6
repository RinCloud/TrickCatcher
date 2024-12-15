n, k = map(int, input().split())

MOD = 10**9 + 7

# Initialize the dp table
dp = [[0] * (k+1) for _ in range(n+1)]
dp[0][0] = 1

# Calculate the dp table
for i in range(1, n+1):
    for j in range(k+1):
        for p in range(i):
            if j-p >= 0:
                dp[i][j] += dp[i-1][j-p]
                dp[i][j] %= MOD

# Print the result
print(dp[n][k])