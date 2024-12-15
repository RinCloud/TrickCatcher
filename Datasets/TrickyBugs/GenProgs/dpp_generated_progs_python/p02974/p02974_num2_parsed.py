'''
def oddness_permutation(n, k):
    MOD = 10**9 + 7

    # Create a DP table to store the counts
    dp = [[0] * (k + 1) for _ in range(n + 1)]
    dp[0][0] = 1

    # Iterate through all possibilities
    for i in range(1, n + 1):
        for j in range(k + 1):
            for d in range(n - i + 1):
                if j + d <= k:
                    dp[i][j + d] += dp[i - 1][j]
                    dp[i][j + d] %= MOD

    return dp[n][k]

n, k = map(int, input().split())
result = oddness_permutation(n, k)
print(result)
'''