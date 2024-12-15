def count_amidakuji(H, W, K):
    # Create a 2D array to store the number of ways to reach each vertical line at each height
    dp = [[0] * (H + 2) for _ in range(W + 1)]

    # Initialize the base cases
    dp[0][1] = 1

    # Iterate through each vertical line
    for i in range(1, W + 1):
        # Iterate through each height
        for j in range(1, H + 2):
            # Calculate the number of ways to reach the current height

            # If the current height is the same as the previous height, the number of ways is the same as the previous height
            if j == dp[i - 1][0]:
                dp[i][j] = dp[i - 1][j]
            
            # If the current height is one less than the previous height, the number of ways is the sum of the number of ways to reach the previous height and the number of ways to reach one less than the previous height
            elif j == dp[i - 1][0] - 1:
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j + 1]
            
            # If the current height is one more than the previous height, the number of ways is the sum of the number of ways to reach the previous height and the number of ways to reach one more than the previous height
            elif j == dp[i - 1][0] + 1:
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1]
            
            # If the current height is greater than one less than the previous height and less than one more than the previous height, the number of ways is the sum of the number of ways to reach the previous height, the number of ways to reach one less than the previous height, and the number of ways to reach one more than the previous height
            elif dp[i - 1][0] - 1 < j < dp[i - 1][0] + 1:
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1] + dp[i - 1][j + 1]
            
            # Otherwise, the number of ways is 0
            
            # Update the current height in the first column of the dp array
            if i == K and dp[i][j] != 0:
                dp[i][0] = j
    
    # Return the number of ways to reach the K-th vertical line at any height
    return dp[W][0]