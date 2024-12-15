# Helper function to calculate the number of ways to paint the squares
def calculate_ways(h):
    MOD = 10**9+7
    n = len(h)
    
    # Initialize the array to store the number of ways
    dp = [[0] * 2 for _ in range(n + 1)]
    
    # Base case: only 1 column
    dp[0][0] = dp[0][1] = 1
    
    for i in range(1, n + 1):
        for j in range(2):
            for k in range(2):
                for l in range(2):
                    if j == 0 and k == 0 and l == 0:
                        dp[i][j] += dp[i - 1][k] * 3
                    elif j == 0 and k == 0 and l == 1:
                        dp[i][j] += dp[i - 1][k] * 2
                    elif j == 0 and k == 1 and l == 0:
                        dp[i][j] += dp[i - 1][k] * 2
                    elif j == 0 and k == 1 and l == 1:
                        dp[i][j] += dp[i - 1][k] * 2
                    elif j == 1 and k == 0 and l == 0:
                        dp[i][j] += dp[i - 1][k]
                    elif j == 1 and k == 0 and l == 1:
                        dp[i][j] += dp[i - 1][k] * 2
                    elif j == 1 and k == 1 and l == 0:
                        dp[i][j] += dp[i - 1][k] * 2
                    else:
                        dp[i][j] += dp[i - 1][k] * 2 * (h[i - 1] - 1)
                        
                    dp[i][j] %= MOD

    return dp[n][0]


# Read input values
N = int(input())
h = list(map(int, input().split()))

# Calculate the number of ways to paint the squares
result = calculate_ways(h)

# Print the result modulo 10^9+7
print(result)