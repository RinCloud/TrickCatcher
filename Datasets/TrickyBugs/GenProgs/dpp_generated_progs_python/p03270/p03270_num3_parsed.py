from collections import defaultdict

def number_of_combinations(K, N):
    MOD = 998244353
    
    dp = [[0] * (2*K+1) for _ in range(N+1)]
    dp[0][0] = 1
    
    for i in range(1, N+1):
        for j in range(K+1):
            dp[i][j] = dp[i-1][j] * (j+1)
            dp[i][j] %= MOD
            
            if j > 0:
                dp[i][j] += dp[i-1][j-1] * (K-j+1)
                dp[i][j] %= MOD
        
        for j in range(K+1, 2*K+1):
            dp[i][j] = dp[i][j-1]
            dp[i][j] %= MOD
    
    result = []
    
    for i in range(2, 2*K+1):
        result.append(dp[N][i])
    
    return result

K, N = map(int, input().split())
result = number_of_combinations(K, N)
for r in result:
    print(r)