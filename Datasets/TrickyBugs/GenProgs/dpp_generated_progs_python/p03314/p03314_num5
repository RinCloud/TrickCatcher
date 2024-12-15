MOD = 10**9 + 7

def count_colorful_sequences(N, K, M, A):
    dp = [[[0] * (M + 1) for _ in range(K + 1)] for _ in range(N + 1)]
    sum_dp = [[0] * (M + 1) for _ in range(N + 1)]
    
    for i in range(1, N + 1):
        sum_dp[i][0] = 1
        
    for i in range(1, K + 1):
        dp[1][i][1] = 1
        sum_dp[1][1] += 1
    
    for n in range(2, N + 1):
        for k in range(1, K + 1):
            for m in range(1, M + 1):
                dp[n][k][m] = (sum_dp[n - 1][m - 1] - sum_dp[max(n - K - 1, 0)][m - 1]) % MOD
                
                if A[m - 1] == k:
                    sum_dp[n][m] = (sum_dp[n][m - 1] + dp[n][k][m]) % MOD
                else:
                    sum_dp[n][m] = (sum_dp[n][m - 1] + dp[n][k][m]) % MOD - dp[n][k][m]
    
    return sum_dp[N][M] % MOD

# Read input
N, K, M = map(int, input().split())
A = list(map(int, input().split()))

# Calculate and print the result
result = count_colorful_sequences(N, K, M, A)
print(result)