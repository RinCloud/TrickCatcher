def count_combinations(N, K, A):
    MOD = 1000000007
    dp = [[0] * (K + 1) for _ in range(N)]
    dp[0][0] = 1
    for i in range(1, N):
        dp[i][0] = (dp[i - 1][0] * 2) % MOD
    for i in range(N):
        for j in range(K + 1):
            if dp[i][j] == 0:
                continue
            dp[i + 1][j] = (dp[i + 1][j] + dp[i][j]) % MOD
            if j + A[i] + 1 <= K:
                dp[i + 1][j + A[i] + 1] = (dp[i + 1][j + A[i] + 1] + dp[i][j]) % MOD
    return sum(dp[N - 1]) % MOD

N, K = map(int, input().split())
A = list(map(int, input().split()))

print(count_combinations(N, K, A))