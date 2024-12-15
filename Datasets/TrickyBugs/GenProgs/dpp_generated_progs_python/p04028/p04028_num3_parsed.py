MOD = 10**9 + 7
 
def count_ways(N, s):
    # Initialize dp array
    dp = [[0] * (N+1) for _ in range(len(s)+1)]
    
    # Base case
    dp[0][0] = 1
    
    # Iterate over all possible lengths of the string
    for i in range(len(s)+1):
        # Iterate over all possible total key presses
        for j in range(N+1):
            if i > 0:
                # Handle press 0
                dp[i][j] += dp[i-1][j]
            
            if i > 0:
                # Handle press 1
                dp[i][j] += dp[i-1][j]
            
            if i > 0 and j > 0 and s[i-1] == '1':
                # Handle backspace press
                dp[i][j] += dp[i-1][j-1]
            
            # Take modulo to avoid overflow
            dp[i][j] %= MOD
    
    return dp[len(s)][N]
 
# Read the input
N = int(input())
s = input()
 
# Call the function and print the result
result = count_ways(N, s)
print(result)