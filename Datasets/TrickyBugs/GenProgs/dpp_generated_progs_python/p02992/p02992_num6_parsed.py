N, K = map(int, input().split())

# Initialize a dynamic programming table
dp = [[0] * (N + 1) for _ in range(K + 1)]

# Base case
dp[0][0] = 1

# Fill the table using dynamic programming
for i in range(1, K + 1):
    for j in range(1, N + 1):
        for k in range(j, N + 1, j):
            dp[i][j] += dp[i - 1][k]
            dp[i][j] %= 1000000007

# Calculate the total count
count = sum(dp[K])
count %= 1000000007

# Print the result
print(count)
