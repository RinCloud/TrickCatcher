MOD = 10**9 + 7

def count_sequences(N, M):
    dp = [[0] * (N + 1) for _ in range(M + 1)]
    dp[0][N] = 1

    for i in range(1, M + 1):
        for j in range(N + 1):
            for k in range(j + 1):
                dp[i][j - k] += dp[i - 1][j]
                dp[i][j - k] %= MOD

    count = 0
    for i in range(N + 1):
        count += dp[M][i]
        count %= MOD

    return count

N, M = map(int, input().split())
print(count_sequences(N, M))