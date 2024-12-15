import sys
input = sys.stdin.readline

H, W, K = map(int, input().split())

dp = [[0] * (W + 1) for _ in range(H + 1)]
dp[0][1] = 1

for i in range(H):
    for j in range(1, W + 1):
        dp[i + 1][j] += dp[i][j] * dp[i][j - 1] % 1000000007
        dp[i + 1][j] %= 1000000007
        dp[i + 1][j] += dp[i][j] * dp[i][j + 1] % 1000000007
        dp[i + 1][j] %= 1000000007

print(dp[H][K])