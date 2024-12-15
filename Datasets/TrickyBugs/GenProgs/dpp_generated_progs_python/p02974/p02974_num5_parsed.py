# Approach:
To solve this problem, we can use dynamic programming.
Let's define dp[i][j] as the number of permutations of {1, 2, ..., i} of oddness j.

The base cases are:
dp[0][0] = 1

For each i from 1 to n:
  dp[i][j] = dp[i-1][j] * i + dp[i-1][j-1] * (i-1)

Finally, the answer is dp[n][k] modulo 10^9+7.

# Python program:

MOD = 10**9+7

n, k = map(int, input().split())

# Initialize dp array
dp = [[0] * (k+1) for _ in range(n+1)]

# Base case
dp[0][0] = 1

# Iterate over n, i, j
for i in range(1, n+1):
    for j in range(k+1):
        # Calculate dp[i][j] using the recurrence relation
        dp[i][j] = (dp[i-1][j] * i + dp[i-1][j-1] * (i-1)) % MOD

# Print the answer
print(dp[n][k])