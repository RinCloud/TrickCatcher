# Implementation

def count_strings(S):
    n = len(S)
    dp = [[0] * n for _ in range(n)]
    MOD = 998244353

    for step in range(2, n+1):
        for i in range(n-step+1):
            j = i + step - 1
            
            if S[i] == S[j]:
                dp[i][j] = (dp[i][j-1] + dp[i+1][j] + 1) % MOD
            else:
                dp[i][j] = (dp[i][j-1] + dp[i+1][j] - dp[i+1][j-1]) % MOD
        
    return dp[0][n-1]

# Test the example cases
print(count_strings("0001"))  # Expected output: 8
print(count_strings("110001"))  # Expected output: 24
print(count_strings("11101111011111000000000110000001111100011111000000001111111110000000111111111"))  # Expected output: 697354558