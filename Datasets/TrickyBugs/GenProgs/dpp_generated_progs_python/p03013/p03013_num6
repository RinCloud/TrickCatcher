# Approach:
- We can solve this problem using dynamic programming.
- We will create a dp array of size n+1 and initialize it with 0.
- As we can climb up one or two steps at a time, the base cases will be dp[0] = 1 and dp[1] = 1.
- Then, for each step from 2 to n, we will check if it is a broken step. If it is, we will set dp[i] = 0.
- Otherwise, we will calculate dp[i] as the sum of dp[i-1] and dp[i-2].
- Finally, we will return dp[n] modulo 1e9 + 7.

# Let's write the code now:
