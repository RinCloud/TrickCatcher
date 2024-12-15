def count_ways(N, M, broken_steps):
    MOD = 1000000007
    
    # Create a list to store the number of ways to reach each step
    dp = [0] * (N + 1)
    
    # Initialize the base case
    dp[0] = 1
    
    # Iterate through each step
    for i in range(1, N + 1):
        # If the current step is broken, skip it
        if i in broken_steps:
            continue
        
        # Calculate the number of ways to reach the current step
        dp[i] = (dp[i - 1] + dp[i - 2]) % MOD
    
    # Return the number of ways to reach the top step
    return dp[N]