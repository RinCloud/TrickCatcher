import sys

def min_operations(N, K, H):
    # If there are no columns, no operations are required
    if K == 0:
        return 0

    # Initialize an array to store the minimum number of operations for each column
    dp = [[sys.maxsize] * (K + 1) for _ in range(N)]
    
    # Initialize the first column with 0 operations for each possible value of H
    for j in range(H[0] + 1):
        dp[0][1] = 0
    
    # Iterate over the remaining columns
    for i in range(1, N):
        # Iterate over the possible values of K
        for k in range(1, K + 1):
            # Iterate over the possible values of H for the current column
            for h in range(H[i] + 1):
                # Calculate the minimum number of operations for the current column
                dp[i][k] = min(dp[i][k], dp[i - 1][k - 1] + h)
    
    # Return the minimum number of operations for the last column with K columns modified
    return dp[-1][K]

# Read input from stdin
N, K = map(int, input().split())
H = list(map(int, input().split()))

# Call the min_operations function and print the result
print(min_operations(N, K, H))