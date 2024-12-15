MOD = 10**9 + 7

def count_sequences(N, K):
    # Initialize a 2D DP array
    dp = [[0] * (N + 1) for _ in range(K + 1)]
    
    # Base case
    dp[0][1] = 1
    
    # Build DP table
    for i in range(1, K + 1):
        for j in range(1, N + 1):
            for k in range(1, j + 1):
                dp[i][j] += dp[i - 1][k]
                dp[i][j] %= MOD
    
    # Calculate the final result
    result = sum(dp[K]) % MOD
    
    return result

# Read input from standard input
N, K = map(int, input().split())

# Calculate and print the result
result = count_sequences(N, K)
print(result)