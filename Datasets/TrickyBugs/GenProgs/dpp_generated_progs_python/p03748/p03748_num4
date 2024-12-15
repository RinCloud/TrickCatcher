MOD = 10**9 + 7

def solve(N, M):
    dp = [[0] * (M + 1) for _ in range(N + 1)]
    dp[N][0] = 1

    for i in range(N, 0, -1):
        for j in range(M):
            dp[i][j+1] = (dp[i][j+1] + dp[i][j]) % MOD
            dp[i-1][j+1] = (dp[i-1][j+1] + dp[i][j] * i) % MOD
            dp[i-2][j+1] = (dp[i-2][j+1] + dp[i][j] * i * (i-1)) % MOD

    return sum(dp[i][M] for i in range(N+1)) % MOD

N, M = map(int, input().split())
print(solve(N, M))