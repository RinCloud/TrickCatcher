N = int(input())
s = input()

dp = [[0] * (N + 1) for _ in range(len(s) + 1)] 

dp[0][0] = 1

for i in range(1, len(s) + 1):
    for j in range(max(i, N - len(s) + i) + 1):
        if s[i - 1] == '0':
            dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1]
        else:
            dp[i][j] = dp[i - 1][j] + dp[i - 1][j + 1]
        dp[i][j] %= 10**9 + 7

print(dp[len(s)][N])