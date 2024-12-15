def count_permutations(N, K):
    MOD = 924844033
    dp = [[0] * N for _ in range(N + 1)]
    dp[0][0] = 1

    for i in range(1, N + 1):
        for j in range(N):
            dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD
            if j > 0:
                dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % MOD
            if j + 1 < N:
                dp[i][j] = (dp[i][j] + dp[i - 1][j + 1]) % MOD
    
    answer = 0
    for i in range(N):
        answer = (answer + dp[N][i]) % MOD
    
    return answer
    
N, K = map(int, input().split())
print(count_permutations(N, K))