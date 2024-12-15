def count_sequences(N, M):
    MOD = 10**9 + 7
    dp = [[0] * (M+1) for _ in range(N+1)]
    dp[0][1] = 1
    for i in range(1, N+1):
        for j in range(1, M+1):
            dp[i][j] = (dp[i][j-1] + dp[i-1][j//2]) % MOD
    return dp[N][M]

N, M = map(int, input().split())
print(count_sequences(N, M))