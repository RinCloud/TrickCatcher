def calculate_possible_values(N, M, K):
    MOD = 10**9 + 7

    # Calculate the binomial coefficient using dynamic programming
    def binomial_coefficient(n, k):
        dp = [[0] * (k+1) for _ in range(n+1)]
        for i in range(n+1):
            dp[i][0] = 1
        for i in range(1, n+1):
            for j in range(1, min(i+1, k+1)):
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % MOD
        return dp[n][k]

    # Calculate the number of possible values modulo MOD
    def calculate_num_possible_values(N, M, K):
        return binomial_coefficient(N+M-1, K-1)

    return calculate_num_possible_values(N, M, K)

# Read input values
N, M, K = map(int, input().split())

# Calculate and print the number of possible values
print(calculate_possible_values(N, M, K))