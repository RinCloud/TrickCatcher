MOD = 998244353

def number_of_combinations(K, N):
    dp = [[0] * (K + 1) for _ in range(2 * K + 1)]

    # Initialize base cases
    for j in range(1, K + 1):
        dp[1][j] = 1

    # Calculate dp[i][j] for all i and j
    for i in range(2, 2 * K + 1):
        for j in range(1, K + 1):
            for k in range(1, K + 1):
                if i - j >= 0:
                    dp[i][j] += dp[i - j][k]
                    dp[i][j] %= MOD

    # Print the results
    for i in range(2, 2 * K + 1):
        print(dp[i][1])

# Read input values
K, N = map(int, input().split())

# Call the function
number_of_combinations(K, N)
