import numpy as np

MOD = int(1e9 + 7)

# Read input
N, A, B = map(int, input().split())

# Initialize dp array
dp = np.zeros((N + 1, 2), dtype=np.int64)
dp[0][0] = 1

# Compute dp array
for i in range(1, N + 1):
    dp[i][0] = (dp[i][0] + dp[i - 1][0]) % MOD
    if i >= A:
        dp[i][1] = (dp[i][1] + dp[i - A][0]) % MOD
    if i >= B:
        dp[i][1] = (dp[i][1] + dp[i - B][1]) % MOD

# Print result
print(dp[N][0] + dp[N][1] % MOD)
