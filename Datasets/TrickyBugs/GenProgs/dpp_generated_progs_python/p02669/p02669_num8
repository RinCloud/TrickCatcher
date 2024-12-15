# Function to calculate minimum number of coins
def minCoins(N, A, B, C, D):
    # Create a table to store the minimum number of coins for each value
    dp = [float('inf')] * (N + 1)

    # Base cases
    dp[0] = 0

    # Fill the table using bottom-up approach
    for i in range(1, N + 1):
        # Multiply the number by 2
        if i % 2 == 0:
            dp[i] = min(dp[i], dp[i // 2] + A)

        # Multiply the number by 3
        if i % 3 == 0:
            dp[i] = min(dp[i], dp[i // 3] + B)

        # Multiply the number by 5
        if i % 5 == 0:
            dp[i] = min(dp[i], dp[i // 5] + C)

        # Increase or decrease the number by 1
        dp[i] = min(dp[i], dp[i - 1] + D)
        dp[i] = min(dp[i], dp[i + 1] + D)

    return dp[N]

# Read the number of test cases
T = int(input())

# Iterate through each test case
for _ in range(T):
    # Read the input for each test case
    N, A, B, C, D = map(int, input().split())

    # Call the minCoins function and print the result
    print(minCoins(N, A, B, C, D))