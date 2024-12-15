# Plan

1. Create a dp array of size N+1.
2. Initialize the dp array with 0.
3. If the first character of s is 'r', set dp[1] to 2. Otherwise, set dp[1] to 1.
4. Iterate from i = 2 to N+1:
    - If the i-th character of s is 'r', set dp[i] to dp[i-1] * 2.
    - If the i-th character of s is 'b', set dp[i] to dp[i-1] * 2 - dp[j-1], where j is the last position of 'b' encountered before i.
5. Print dp[N] % (10^9 + 7).

# Dry Run
## Input
    N = 2
    K = 2
    s = "rb"
## Output
    9
## Execution
    dp = [0, 0, 0]
    dp[1] = 1
    dp[2] = 2
    dp = [1, 2, 0]
    dp[2] = dp[2] * 2 - dp[1] = 4 - 1 = 3
    dp = [1, 2, 3]
    Print dp[2] % (10^9 + 7) = 3