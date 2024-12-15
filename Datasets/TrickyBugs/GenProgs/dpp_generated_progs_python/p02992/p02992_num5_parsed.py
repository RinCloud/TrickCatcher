N, K = map(int, input().split())

MOD = 10**9 + 7

# Dynamic programming table
dp = [[0] * (N+1) for _ in range(K+1)]

# Base case: if K is 0, there is only one sequence consisting of an empty set
dp[0][0] = 1

# Calculate the number of sequences for each length and product
for i in range(1, K+1):
    for j in range(N+1):
        dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD
        for k in range(1, j+1):
            dp[i][j] = (dp[i][j] + dp[i-1][j//k]) % MOD

# The result is the sum of all sequences of length K
result = sum(dp[K]) % MOD

print(result)