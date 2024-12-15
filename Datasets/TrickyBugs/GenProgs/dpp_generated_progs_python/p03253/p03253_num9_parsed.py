# Constants
MOD = int(1e9) + 7

# Read input
N, M = map(int, input().split())

# Initialize dp array
dp = [[0] * (M + 1) for _ in range(N + 1)]

# Base case: dp[i][1] = 1 for all i
for i in range(N + 1):
    dp[i][1] = 1

# Fill dp array using dynamic programming
for i in range(2, N + 1):
    for j in range(2, M + 1):
        dp[i][j] = (dp[i][j // i] + dp[i - 1][j]) % MOD

# Calculate the final result
result = sum(dp[N][1:M+1]) % MOD

# Print the result
print(result)
