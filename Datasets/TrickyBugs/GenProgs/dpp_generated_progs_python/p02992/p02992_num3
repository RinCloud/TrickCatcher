N, K = map(int, input().split())

# Create a 2D array to store the number of sequences
dp = [[0] * (N + 1) for _ in range(K + 1)]

# Initialize the base case: dp[i][j] = 1, where i=0 and 0 <= j <= N
for j in range(N + 1):
    dp[0][j] = 1

# Fill in the DP array
for i in range(1, K + 1):
    for j in range(1, N + 1):
        for k in range(1, j + 1):
            dp[i][j] += dp[i - 1][j // k]
            dp[i][j] %= 10**9 + 7

# Print the result
print(dp[K][N])