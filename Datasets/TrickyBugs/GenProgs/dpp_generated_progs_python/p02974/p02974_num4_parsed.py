import sys

def count_permutations(n, k):
    # Dynamic programming table to store the number of permutations of oddness k for each n
    dp = [[0] * (k+1) for _ in range(n+1)]

    # Initialize the base case
    dp[0][0] = 1

    # Iterate over each value of n
    for i in range(1, n+1):
        # Iterate over each value of k
        for j in range(k+1):
            # Calculate the number of permutations of oddness k for current n
            for l in range(i+1):
                if j >= abs(i - l):
                    dp[i][j] += dp[i-1][j - abs(i - l)]
                    dp[i][j] %= (10**9 + 7)

    return dp[n][k]


# Read input from standard input
n, k = map(int, sys.stdin.readline().split())

# Call the count_permutations function and print the result
sys.stdout.write(str(count_permutations(n, k)))