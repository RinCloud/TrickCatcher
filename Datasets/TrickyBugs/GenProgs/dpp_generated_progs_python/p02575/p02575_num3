H, W = map(int, input().split())
grid = [[0]*W for _ in range(H)]

for i in range(H):
    a, b = map(int, input().split())
    for j in range(a, b+1):
        grid[i][j-1] = 1

dp = [[float('inf')]*W for _ in range(H)]
dp[0][0] = 0

for i in range(H):
    for j in range(W):
        if i < H-1:
            dp[i+1][j] = min(dp[i+1][j], dp[i][j] + (1-grid[i+1][j]))
        if j < W-1:
            dp[i][j+1] = min(dp[i][j+1], dp[i][j] + (1-grid[i][j+1]))

if dp[H-1][W-1] == float('inf'):
    print(-1)
else:
    for i in range(H):
        print(dp[i][W-1])