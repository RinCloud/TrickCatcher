import sys

# Function to calculate the minimum number of coins
def min_coins(N, A, B, C, D):
    # Dynamic programming table to store minimum number of coins for each number
    dp = [sys.maxsize] * (N+1)
    dp[0] = 0

    for i in range(1, N+1):
        # Multiply by 2 operation
        if i % 2 == 0:
            dp[i] = min(dp[i], dp[i // 2] + A)
        else:
            dp[i] = min(dp[i], dp[i - 1] + D)

        # Multiply by 3 operation
        if i % 3 == 0:
            dp[i] = min(dp[i], dp[i // 3] + B)
        else:
            dp[i] = min(dp[i], dp[i - 1] + D)

        # Multiply by 5 operation
        if i % 5 == 0:
            dp[i] = min(dp[i], dp[i // 5] + C)
        else:
            dp[i] = min(dp[i], dp[i - 1] + D)

    return dp[N]

# Read the number of testcases
T = int(input())

# Iterate through each testcase
for _ in range(T):
    # Read the values for each testcase
    N, A, B, C, D = map(int, input().split())

    # Call the min_coins function and print the result
    print(min_coins(N, A, B, C, D))