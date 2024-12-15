# Program to find the number of permutations of {1, 2, ..., n} with oddness k modulo 10^9+7

# Function to calculate the number of permutations with oddness k
def count_permutations(n, k):
    # Initialization
    MOD = 10**9 + 7
    dp = [[0] * (n + 1) for _ in range(n + 1)]
    dp[0][0] = 1

    # Dynamic Programming
    for i in range(1, n + 1):
        for j in range(i + 1):
            dp[i][j] = (dp[i][j] + dp[i - 1][j] * (i - j)) % MOD
            if j > 0:
                dp[i][j] = (dp[i][j] + dp[i - 1][j - 1] * (j + 1)) % MOD

    return dp[n][k]

# Reading input
n, k = map(int, input().split())

# Finding the number of permutations with oddness k and modulo 10^9+7
result = count_permutations(n, k)

# Printing the result
print(result)