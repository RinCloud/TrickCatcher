import sys

MOD = 10 ** 9 + 7


def solve(n, m, s, t):
    dp = [[0] * (m + 1) for _ in range(n + 1)]
    dp[0][0] = 1

    for i in range(1, n + 1):
        dp[i][0] = dp[i - 1][0]

    for j in range(1, m + 1):
        dp[0][j] = dp[0][j - 1]

    for i in range(1, n + 1):
        for j in range(1, m + 1):
            if s[i - 1] != t[j - 1]:
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1]) % MOD
            else:
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1] + 1) % MOD

    return dp[n][m]


n, m = map(int, sys.stdin.readline().split())
s = list(map(int, sys.stdin.readline().split()))
t = list(map(int, sys.stdin.readline().split()))

print(solve(n, m, s, t))