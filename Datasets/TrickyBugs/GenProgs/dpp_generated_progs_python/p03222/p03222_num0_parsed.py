import numpy as np

def count_amidakuji(H, W, K):
    MOD = 1000000007

    # Initialize the dynamic programming table
    dp = np.zeros((H + 1, W), dtype=int)
    dp[0][0] = 1

    # Fill in the dynamic programming table
    for i in range(1, H + 1):
        for j in range(W):
            # Case 1: Going straight down
            if j > 0:
                dp[i][j] += dp[i - 1][j - 1]

            # Case 2: Going straight up
            if j < W - 1:
                dp[i][j] += dp[i - 1][j + 1]

            # Case 3: Staying at the same level
            dp[i][j] += dp[i - 1][j]

            # Take the modulo to avoid overflow
            dp[i][j] %= MOD

    return dp[H][K - 1]

# Read input from standard input
H, W, K = map(int, input().split())

# Calculate and print the result
result = count_amidakuji(H, W, K)
print(result)