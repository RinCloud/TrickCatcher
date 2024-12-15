def min_chars_changed(S, T):
    m = len(S)
    n = len(T)
    
    # Initialize a 2D table to store the minimum number of characters changed
    dp = [[0] * (n+1) for _ in range(m+1)]
    
    # Fill the table using dynamic programming
    for i in range(1, m+1):
        for j in range(1, n+1):
            if S[i-1] == T[j-1]:
                dp[i][j] = dp[i-1][j-1]
            else:
                dp[i][j] = dp[i-1][j] + 1
    
    # Return the minimum number of characters changed to make T a substring of S
    return dp[m][n]


# Read the input
S = input().strip()
T = input().strip()

# Get the minimum number of characters changed
min_changed = min_chars_changed(S, T)

# Print the result
print(min_changed)
