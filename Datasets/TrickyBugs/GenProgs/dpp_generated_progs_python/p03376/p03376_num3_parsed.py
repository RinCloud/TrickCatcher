# Reading input values
N, X, D = map(int, input().split())
m = [0] * (N + 1)
p = [0] * (N + 1)
for i in range(1, N + 1):
    m[i], p[i] = map(int, input().split())

# Initializing variables
dp = [[-1] * (X + 1) for _ in range(N + 1)]
dp[0][0] = 0

# Dynamic programming
for i in range(1, N + 1):
    for j in range(X + 1):
        if dp[i - 1][j] >= 0:
            dp[i][j] = max(dp[i][j], dp[i - 1][j])
            k = (j - dp[i - 1][j]) // m[i]
            if dp[i - 1][j] + k * m[i] + p[i] * k * (k - 1) // 2 <= X:
                dp[i][j + k * m[i]] = max(dp[i][j + k * m[i]], dp[i - 1][j] + k)

# Finding the maximum number of doughnuts
max_doughnuts = dp[N][X]

# Printing the result
print(max_doughnuts)