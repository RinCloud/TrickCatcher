def count_strings(N, A, B):
    mod = 10**9 + 7
    
    # Create a list of size N initialized with all zeros
    x = [0] * N
    
    # Create a list to store the number of ways to obtain each prefix
    dp = [0] * (N + 1)
    
    # Initialize dp[0] to 1 (because we can obtain an empty string)
    dp[0] = 1
    
    # Iterate over each position in the string x
    for i in range(N):
        # If current character is '0'
        if x[i] == 0:
            # Iterate over possible lengths of consecutive '1' character regions
            for j in range(A, B + 1):
                # Check if j is within bounds and the region does not exceed the length of x
                if i + j <= N and j <= B:
                    # Update dp[i+j] by adding the current dp[i] value
                    dp[i+j] = (dp[i+j] + dp[i]) % mod
            
            # Set '1' in the current position of x
            x[i] = 1
            
    # Return the result, which is stored in dp[N]
    return dp[N]

# Read input from standard input
N, A, B = map(int, input().split())

# Print the result
print(count_strings(N, A, B))