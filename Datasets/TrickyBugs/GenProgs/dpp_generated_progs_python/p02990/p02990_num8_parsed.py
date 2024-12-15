MOD = 10**9 + 7

def binomial_coefficient(n, k):
    if k > n - k:
        k = n - k
    res = 1
    for i in range(k):
        res *= (n - i)
        res //= (i + 1)
    return res

def ways_to_arrange(N, K):
    dp = [[0] * (K + 1) for _ in range(N + 1)]
    dp[0][0] = 1
    for i in range(1, N + 1):
        dp[i][0] = 1
        for j in range(1, K + 1):
            dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1]
            dp[i][j] %= MOD
    return dp

N, K = map(int, input().split())
dp = ways_to_arrange(N, K)
for i in range(1, K + 1):
    print((dp[N - K][i] * binomial_coefficient(K - 1, i - 1)) % MOD)