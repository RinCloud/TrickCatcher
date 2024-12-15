MOD = 10**9 + 7

def count_colorful_subsequences(N, K, M, A):
    dp = [[[0] * (K+1) for _ in range(K+2)] for _ in range(N+1)]
    
    for i in range(N+1):
        dp[i][0][K+1] = 1
    
    for i in range(N+1):
        for j in range(K+1):
            for k in range(K+1):
                if dp[i][j][k] > 0:
                    for m in range(1, K+2):
                        if m == A[i] or A[i] == 0:
                            dp[i+1][j+1][min(k, m)] = (dp[i+1][j+1][min(k, m)] + dp[i][j][k]) % MOD
                        else:
                            dp[i+1][1][min(k, m)] = (dp[i+1][1][min(k, m)] + dp[i][j][k]) % MOD
    
    ans = 0
    for j in range(K+1):
        for k in range(K+2):
            ans = (ans + dp[N][j][k]) % MOD
    
    return ans

if __name__ == "__main__":
    N, K, M = map(int, input().split())
    A = list(map(int, input().split()))
    
    result = count_colorful_subsequences(N, K, M, A)
    print(result)