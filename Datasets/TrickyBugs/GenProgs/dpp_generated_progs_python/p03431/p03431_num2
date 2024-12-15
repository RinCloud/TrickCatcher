MOD = 998244353

def calculate_ways(N, K):
    dp = [[0]*(K+1) for _ in range(N+1)]
    dp[0][0] = 1
    
    for i in range(1, N+1):
        dp[i][0] = 1
    
    for i in range(1, N+1):
        for j in range(1, K+1):
            dp[i][j] = (dp[i-1][j-1] + dp[i][j-1] - dp[i-1][j]) % MOD
    
    return dp[N][K] % MOD

N, K = map(int, input().split())
print(calculate_ways(N, K))