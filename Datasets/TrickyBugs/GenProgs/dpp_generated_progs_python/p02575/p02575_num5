# Program

H, W = map(int, input().split())

grid = []
for _ in range(H):
    A, B = map(int, input().split())
    grid.append((A, B))

dp = [[float('inf')] * (W+1) for _ in range(H+1)]
dp[0][1] = 0

for i in range(H):
    for j in range(1, W+1):
        if j < grid[i][0] or j > grid[i][1]:
            dp[i+1][j] = min(dp[i+1][j], dp[i][j] + 1)
        dp[i+1][j] = min(dp[i+1][j], dp[i+1][j-1])

answer = []
for i in range(H):
    if dp[i+1][W] == float('inf'):
        answer.append(-1)
    else:
        answer.append(dp[i+1][W])

print('\n'.join(map(str, answer)))