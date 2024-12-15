import numpy as np

def count_permutations(N, K):
    # Define modulo
    M = 924844033
    
    # Initialize count
    count = 0
    
    # Create array to store counts for each i
    dp = np.zeros((N + 1, K + 1), dtype=int)
    
    # Set initial values
    dp[0][0] = 1
    
    # Loop through each position in the permutation
    for i in range(1, N + 1):
        # Loop through each difference value
        for j in range(K + 1):
            # Calculate count for current position and difference value
            
            # Check if current difference is less than j and less than or equal to N
            if j - i >= 0:
                # Subtract counts for the previous position and previous difference value
                dp[i][j] = dp[i - 1][j] - dp[i - 1][j - i]
                dp[i][j] %= M
            
            # Add counts for the previous position and previous difference value
            dp[i][j] += dp[i - 1][j]
            dp[i][j] %= M
    
    # Calculate final count by summing the last row of dp
    count = np.sum(dp[N]) % M
    
    return count

# Get input
N, K = map(int, input().split())

# Calculate count of valid permutations
count = count_permutations(N, K)

# Print count modulo M
print(count)