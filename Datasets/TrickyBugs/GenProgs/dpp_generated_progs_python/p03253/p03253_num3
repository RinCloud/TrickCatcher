MOD = int(1e9) + 7

def count_sequences(N, M):
    dp = [[0] * (M+1) for _ in range(N+1)]
    dp[0][1] = 1
    for i in range(1, N+1):
        for j in range(1, M+1):
            for k in range(1, j+1):
                if j % k == 0:
                    dp[i][j] += dp[i-1][k] % MOD
    return sum(dp[N]) % MOD

N, M = map(int, input().split())
print(count_sequences(N, M))