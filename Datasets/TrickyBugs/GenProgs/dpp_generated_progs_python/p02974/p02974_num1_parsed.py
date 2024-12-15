def count_permutations(n, k):
    mod = 10**9 + 7
    dp = [[0] * (n + 1) for _ in range(k + 1)]
    dp[0][0] = 1

    for i in range(n):
        for j in range(k + 1):
            for s in range(n - i):
                if j + n - i - s <= k:
                    dp[i + 1][j + n - i - s] += dp[i][j]
                    dp[i + 1][j + n - i - s] %= mod
        for j in range(k + 1):
            dp[i + 1][j] += dp[i][j] * (n - i - 1)
            dp[i + 1][j] %= mod

    return dp[n][k]

n, k = map(int, input().split())
result = count_permutations(n, k)
print(result)