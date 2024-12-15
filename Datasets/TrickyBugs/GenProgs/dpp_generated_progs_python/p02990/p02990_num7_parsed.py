def arrange_balls(N, K):
    MOD = 10**9 + 7
    dp = [[0] * (K + 1) for _ in range(N + 1)]
    dp[0][0] = 1

    for i in range(1, N + 1):
        for j in range(K + 1):
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % MOD if j > 0 else dp[i - 1][j + 1]

    result = [0] * K
    for j in range(1, K + 1):
        for i in range(N, 0, -1):
            result[j - 1] = (result[j - 1] + dp[i][j]) % MOD
    return result


N, K = map(int, input().split())
result = arrange_balls(N, K)
for res in result:
    print(res)