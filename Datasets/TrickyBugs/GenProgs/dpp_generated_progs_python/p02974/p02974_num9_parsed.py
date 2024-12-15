def calculate_oddness(n, k):
    mod = 10**9 + 7
    dp = [[0] * (n + 1) for _ in range(n + 1)]
    dp[0][0] = 1
    for i in range(1, n + 1):
        dp[i][0] = dp[i - 1][0]
        for j in range(1, i + 1):
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j] * (i - 1)) % mod

    return dp[n][k]

n, k = map(int, input().split())
result = calculate_oddness(n, k)
print(result)