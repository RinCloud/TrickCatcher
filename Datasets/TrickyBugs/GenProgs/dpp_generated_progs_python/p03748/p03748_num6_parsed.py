MOD = 1000000007


def count_sequences(N, M):
    dp = [[0] * (M + 1) for _ in range(N + 1)]
    dp[N][0] = 1

    for i in range(N, 0, -1):
        for j in range(M):
            dp[i - 1][j + 1] += dp[i][j] * i
            dp[i - 1][j + 1] %= MOD
            dp[i][j + 1] += dp[i][j] * (N - i + 1)
            dp[i][j + 1] %= MOD

    result = 0
    for i in range(N + 1):
        result += dp[i][M]
        result %= MOD

    return result


N, M = map(int, input().split())
print(count_sequences(N, M))