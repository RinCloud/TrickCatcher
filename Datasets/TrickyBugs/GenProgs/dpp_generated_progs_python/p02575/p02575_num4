H, W = map(int, input().split())
blocks = [[0 for _ in range(W+1)] for _ in range(H+1)]
for i in range(1, H+1):
    A, B = map(int, input().split())
    for j in range(A, B+1):
        blocks[i][j] = 1

dp = [[float('inf') for _ in range(W+1)] for _ in range(H+1)]
dp[0][1] = 0
for i in range(1, H+1):
    for j in range(1, W+1):
        if blocks[i][j] == 1:
            continue
        dp[i][j] = min(dp[i][j], dp[i-1][j] + 1)
        dp[i][j] = min(dp[i][j], dp[i][j-1] + 1)
    if dp[i][W] == float('inf'):
        dp[i][W] = -1

for i in range(1, H+1):
    print(dp[i][W])