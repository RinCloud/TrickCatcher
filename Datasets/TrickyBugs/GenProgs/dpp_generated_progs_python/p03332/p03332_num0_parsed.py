# Dynamic Programming Solution

def count_ways(N, A, B, K):
    MOD = 998244353
    
    # Initialize dp array with all zeros
    dp = [0] * (K + 1)
    dp[0] = 1
    
    for i in range(1, N + 1):
        # Calculate prefix sum of dp array
        prefix_sum = [0] * (K + 1)
        prefix_sum[0] = dp[0]
        
        for j in range(1, K + 1):
            prefix_sum[j] = (prefix_sum[j-1] + dp[j]) % MOD
        
        # Calculate the number of ways to paint the tower
        for j in range(K, -1, -1):
            low = max(0, j - B)
            high = max(0, j - A)
            dp[j] = (prefix_sum[high] - prefix_sum[low] + MOD) % MOD
    
    return dp[K]

# Read input
N, A, B, K = map(int, input().split())

# Call the function and print the result
print(count_ways(N, A, B, K))