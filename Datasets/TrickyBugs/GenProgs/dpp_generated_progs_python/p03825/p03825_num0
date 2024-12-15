# Algorithm:
1. First, we need to calculate the number of iterations required to reach one rational number on the blackboard. The number of iterations would be (N + M - 1)/(K - 1).
2. Create a 2D DP table of size (N + 1) * (M + 1), where dp[i][j] represents the number of different possible values taken by the rational number when there are i zeros and j ones remaining on the blackboard.
3. Initialize dp[0][0] = 1, as there are no zeros and ones initially.
4. Iterate over the DP table using two nested loops.
5. For each cell dp[i][j], if i > 0, subtract K - 1 zeros and update dp[i][j] with the sum of dp[i - (K - 1)][j].
6. Similarly, if j > 0, subtract K - 1 ones and update dp[i][j] with the sum of dp[i][j - (K - 1)].
7. Finally, print dp[N][M] modulo 10^9 + 7 as the result.

# Let's write the code now:

MOD = 10**9 + 7

def calculate_possible_values(N, M, K):
    iterations = (N + M - 1) // (K - 1)
    dp = [[0] * (M + 1) for _ in range(N + 1)]
    dp[0][0] = 1

    for i in range(N + 1):
        for j in range(M + 1):
            if i > 0:
                dp[i][j] += dp[max(0, i - (K - 1))][j]
            if j > 0:
                dp[i][j] += dp[i][max(0, j - (K - 1))]
            
            dp[i][j] %= MOD

    return dp[N][M]

# Read input values
N, M, K = map(int, input().split())

# Calculate the number of possible values
result = calculate_possible_values(N, M, K)

# Print the result
print(result)