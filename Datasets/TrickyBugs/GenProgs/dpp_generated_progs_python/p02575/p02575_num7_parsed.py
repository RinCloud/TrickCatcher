import sys

# Read input
H, W = map(int, input().split())
grid = [list(map(int, input().split())) for _ in range(H)]

# Initialize dp table
dp = [[float("inf")]*W for _ in range(H)]
dp[0][0] = 0

# Fill dp table
for i in range(H):
    for j in range(W):
        # Check if moving right is allowed
        if j+1 < W and grid[i][j] < grid[i][j+1]:
            dp[i][j+1] = min(dp[i][j+1], dp[i][j]+1)
        # Check if moving down is allowed
        if i+1 < H and grid[i][j] < grid[i+1][j]:
            dp[i+1][j] = min(dp[i+1][j], dp[i][j]+1)

# Print the results
for i in range(H):
    if dp[i][-1] == float("inf"):
        print("-1")
    else:
        print(dp[i][-1])
