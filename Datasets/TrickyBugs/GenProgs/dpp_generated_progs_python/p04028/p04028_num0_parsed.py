def count_key_presses(N, s):
    mod = 1000000007
    
    # Create a 2D array dp to store the number of ways to reach each state
    dp = [[0] * (N+1) for _ in range(len(s)+1)]
    
    # Base case: when the string is empty, there is only one way to reach this state
    dp[0][0] = 1
    
    for i in range(len(s)):
        for j in range(N+1):
            # If the current key press is '0', add the number of ways to reach the previous state without this key press
            dp[i+1][j] = (dp[i+1][j] + dp[i][j]) % mod
            
            # If the current key press is '1', add the number of ways to reach the previous state without this key press,
            # multiplied by the number of remaining key presses
            dp[i+1][j+1] = (dp[i+1][j+1] + dp[i][j] * (N-j)) % mod
            
            # If the current key press is 'backspace', add the number of ways to reach the previous state without this key press
            dp[i+1][j] = (dp[i+1][j] + dp[i][j]) % mod
            
    return dp[len(s)][N]

N = int(input())
s = input()
print(count_key_presses(N, s))