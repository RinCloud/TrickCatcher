from collections import deque

# Read the input values
N, X, D = map(int, input().split())
M = [0] * (N+1)
P = [0] * (N+1)

# Read the values for Moto and P
for i in range(1, N+1):
    M[i], P[i] = map(int, input().split())

# Compute the maximum number of doughnuts that can be made
dp = [[-1] * (X+1) for _ in range(N+1)]
dp[0][0] = 0

for i in range(1, N+1):
    for j in range(X+1):
        if dp[i-1][j] >= 0:
            dp[i][j] = max(dp[i][j], dp[i-1][j])
        if j >= M[i] and dp[i][j-M[i]] >= 0:
            dp[i][j] = max(dp[i][j], dp[i][j-M[i]] + 1)
        if dp[i][j] >= 0 and j + D <= X:
            dp[i][j+D] = max(dp[i][j+D], dp[i][j])

# Find the maximum number of doughnuts
answer = 0
for i in range(1, N+1):
    answer = max(answer, dp[i][X])

# Print the answer
print(answer)