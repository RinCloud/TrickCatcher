MOD = 10**9+7

def count_possible_sequences(N, M):
    dp = [[0] * (N+1) for _ in range(M+1)]
    dp[0][0] = 1

    for i in range(1, M+1):
        for j in range(N+1):
            dp[i][j] = (dp[i-1][j] * (j+1) + dp[i-1][j-1] * (N-j+1)) % MOD

    return dp[M][N]

N, M = map(int, input().split())
print(count_possible_sequences(N, M))