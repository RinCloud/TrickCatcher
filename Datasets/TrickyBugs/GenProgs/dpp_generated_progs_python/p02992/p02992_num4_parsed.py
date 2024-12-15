MOD = 10**9 + 7

def count_sequences(N, K):
    dp = [[0] * (N + 1) for _ in range(K + 1)]
    dp[0][0] = 1

    for i in range(1, K + 1):
        for j in range(N + 1):
            dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD
            if (j * 2 <= N):
                dp[i][j * 2] = (dp[i][j * 2] + dp[i - 1][j]) % MOD

    count = 0
    for j in range(N + 1):
        count = (count + dp[K][j]) % MOD

    return count

N, K = map(int, input().split())
print(count_sequences(N, K))