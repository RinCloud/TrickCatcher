H, W = map(int, input().split())
grid = [[] for _ in range(H+1)]
for h in range(H):
    A, B = map(int, input().split())
    grid[h] = [A-1, B-1]
    
# initialize dp table
dp = [[float('inf')]*(W) for _ in range(H+1)]
dp[0][0] = 0

# loop through each row
for h in range(H):
    # loop through each column
    for w in range(W):
        # check if we can move down from current square
        if grid[h][0] <= w <= grid[h][1]:
            dp[h+1][w] = min(dp[h][w] + 1, dp[h+1][w])
        else:
            dp[h+1][w] = min(dp[h][w], dp[h+1][w])
        # check if we can move right from current square
        if w+1 < W:
            dp[h][w+1] = min(dp[h][w] + 1, dp[h][w+1])

# print the answer for each case
for h in range(H):
    if dp[h][-1] == float('inf'):
        print(-1)
    else:
        print(dp[h][-1])