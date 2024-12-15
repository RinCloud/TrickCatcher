def count_permutations(N, K):
    MOD = 924844033
    
    dp = [[0] * (N+1) for _ in range(N+1)]
    dp[0][0] = 1
    
    for i in range(1, N+1):
        for j in range(0, i+1):
            dp[i][j] = (dp[i][j] + dp[i-1][j] + dp[i-1][j-1] - dp[i-K-1][j-1]) % MOD
    
    return dp[N][N]

N, K = map(int, input().split())
answer = count_permutations(N, K)
print(answer)