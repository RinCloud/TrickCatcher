# Function to calculate number of pairs of subsequences

def calc_pairs(N, M, S, T):
    mod = 10**9+7
    # Initialize a 2D dp array with N+1 rows and M+1 columns
    dp = [[0]*(M+1) for _ in range(N+1)]
    
    # Initialize first row and column with 1
    for i in range(N+1):
        dp[i][0] = 1
    for j in range(M+1):
        dp[0][j] = 1
    
    # Iterate over the entire sequences S and T
    for i in range(1, N+1):
        for j in range(1, M+1):
            if S[i-1] == T[j-1]:
                # If elements match, add the number of pairs of subsequences without the current elements
                dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % mod
            else:
                # If elements don't match, take the previous pairs
                dp[i][j] = (dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1]) % mod
    
    # Return the number of pairs of subsequences
    return dp[N][M]

# Read input from standard input
N, M = map(int, input().split())
S = list(map(int, input().split()))
T = list(map(int, input().split()))

# Calculate the number of pairs of subsequences
pairs = calc_pairs(N, M, S, T)

# Print the result
print(pairs)