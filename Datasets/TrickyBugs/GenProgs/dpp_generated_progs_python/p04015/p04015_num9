import sys

# Read N and A from input
N, A = map(int, sys.stdin.readline().split())

# Read the integers on the cards from input
cards = list(map(int, sys.stdin.readline().split()))

# Initialize a 2D array to store the number of ways
# to select cards such that the average is A
dp = [[0] * (N * 50 + 1) for _ in range(N + 1)]
dp[0][0] = 1

# Iterate over the cards
for i in range(1, N + 1):
    # Iterate over possible sums
    for j in range(i, 0, -1):
        # Iterate over possible selected cards
        for k in range(i - 1, j - 2, -1):
            # Update the number of ways to select cards
            dp[j][k] += dp[j - 1][k - (i - cards[j - 1])]

# Count the number of ways to select cards with average A
count = 0
for i in range(1, N + 1):
    count += dp[i][i * A]

# Print the result
print(count)