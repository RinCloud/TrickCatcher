def count_subsequence_pairs(N, M, S, T):
    MOD = int(1e9 + 7)
    
    # initialize dp table
    dp = [[0] * (M + 1) for _ in range(N + 1)]
    
    # for each element in sequence T
    for j in range(M + 1):
        dp[0][j] = 1
    
    # fill the dp table
    for i in range(1, N + 1):
        for j in range(1, M + 1):
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1]) % MOD
            
            if S[i - 1] == T[j - 1]:
                dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % MOD
    
    # return the answer
    return dp[N][M]


# Read input
N, M = map(int, input().split())
S = list(map(int, input().split()))
T = list(map(int, input().split()))

# Calculate and print the result
result = count_subsequence_pairs(N, M, S, T)
print(result)