MOD = 10**9 + 7

def count_possible_sums(N, K):
    dp = [[0] * (K + 1) for _ in range(N + 1)]
    dp[0][0] = 1

    for i in range(1, N + 1):
        dp[i][0] = 1
        for j in range(1, min(i, K) + 1):
            dp[i][j] = (dp[i-1][j] + dp[i-1][j-1]) % MOD

    return dp[N][K]

N, K = map(int, input().split())
print(count_possible_sums(N, K))