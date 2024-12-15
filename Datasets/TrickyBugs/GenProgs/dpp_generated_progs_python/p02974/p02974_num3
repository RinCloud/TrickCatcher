import math

def count_permutations(n, k):
    mod = 10**9 + 7
    dp = [[0] * (k + 1) for _ in range(n + 1)]
    dp[0][0] = 1
    
    for i in range(1, n+1):
        for j in range(k+1):
            dp[i][j] = (dp[i][j] + dp[i-1][j] + dp[i-1][j-1]) % mod
            if j >= i:
                dp[i][j] = (dp[i][j] - dp[i-1][j-i] + mod) % mod
    
    return dp[n][k]


n, k = map(int, input().split())
result = count_permutations(n, k)
print(result)