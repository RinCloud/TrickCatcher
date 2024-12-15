def count_combinations(K, N):
    MOD = 998244353
    dp = [[0] * (2 * K + 1) for _ in range(N + 1)]
    dp[0][0] = 1

    for i in range(1, N + 1):
        for j in range(2, 2 * K + 1):
            dp[i][j] = (dp[i][j - 1] + dp[i - 1][j - 2]) % MOD

    result = [0] * (2 * K - 1)
    for i in range(1, 2 * K, 2):
        for j in range(N + 1):
            result[i - 1] = (result[i - 1] + dp[j][i]) % MOD
            if j < N:
                result[i] = (result[i] + dp[j][i + 1]) % MOD

    return result

K, N = map(int, input().split())
result = count_combinations(K, N)
for res in result:
    print(res)