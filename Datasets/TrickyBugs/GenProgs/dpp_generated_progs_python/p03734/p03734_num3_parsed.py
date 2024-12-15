# Reading input from standard input
N, W = map(int, input().split())

# Initializing a 2-dimensional array for memoization
dp = [[0] * (W + 1) for _ in range(N + 1)]

# Iterating through each item
for i in range(1, N + 1):
    w_i, v_i = map(int, input().split())
    for j in range(W + 1):
        if j < w_i:
            dp[i][j] = dp[i - 1][j]
        else:
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w_i] + v_i)

# Printing the maximum possible total value of the selected items
print(dp[N][W])