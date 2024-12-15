def count_strings(S, K):
    MOD = 998244353
    n = len(S)
    dp = [[0] * (K+1) for _ in range(n+1)]
    
    # Initialize the base case
    dp[0][0] = 1
    
    for i in range(1, n+1):
        dp[i][0] = dp[i-1][0] if S[i-1] == '0' else 0
        
    for i in range(1, n+1):
        for j in range(1, K+1):
            dp[i][j] = dp[i-1][j]
            for k in range(i-1, -1, -1):
                if S[i-1] == '1' and S[k] == '0':
                    dp[i][j] = (dp[i][j] + dp[k][j-1]) % MOD
                    
    return sum(dp[n]) % MOD


# Read the input from standard input
S, K = input().split()
K = int(K)

# Print the result
print(count_strings(S, K))