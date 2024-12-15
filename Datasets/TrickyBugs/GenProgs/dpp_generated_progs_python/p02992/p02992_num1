k_mod = 10**9 + 7

def find_sequences(N, K):
    dp = [[0] * (N+1) for _ in range(K+1)]
    
    for i in range(1, N+1):
        dp[1][i] = 1
    
    for i in range(1, K+1):
        dp[i][1] = 1
    
    for i in range(2, K+1):
        for j in range(2, N+1):
            dp[i][j] = (dp[i][j-1] + dp[i-1][j]) % k_mod
    
    return dp[K][N]

def main():
    N, K = map(int, input().split())
    result = find_sequences(N, K)
    print(result)

main()