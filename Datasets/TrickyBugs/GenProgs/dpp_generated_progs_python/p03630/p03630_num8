H, W = map(int, input().split())
S = [input() for _ in range(H)]

dp = [[0] * W for _ in range(H)]
dp[0][0] = 1 if S[0][0] == '#' else 0

for i in range(1, W):
    if S[0][i] == '#':
        dp[0][i] = 1
    else:
        dp[0][i] = dp[0][i-1]

for i in range(1, H):
    if S[i][0] == '#':
        dp[i][0] = 1
    else:
        dp[i][0] = dp[i-1][0]

for i in range(1, H):
    for j in range(1, W):
        if S[i][j] == '#':
            dp[i][j] = min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1]) + 1
        else:
            dp[i][j] = max(dp[i-1][j], dp[i][j-1], dp[i-1][j-1])

print(dp[H-1][W-1] ** 2)