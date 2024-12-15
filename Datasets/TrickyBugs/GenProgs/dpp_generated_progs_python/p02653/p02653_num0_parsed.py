# Get input values
N, A, B = map(int, input().split())

# Initialize dynamic programming array
dp = [0] * (N+1)
dp[0] = 1

# Compute the number of different strings
for i in range(1, N+1):
    dp[i] = dp[i-1]  # Initialize with the previous value
    if i >= A:
        dp[i] += dp[i-A]  # Add the value at position i-A
    if i >= B:
        dp[i] += dp[i-B]  # Add the value at position i-B
    dp[i] %= (10**9 + 7)  # Apply modulo

# Print the result
print(dp[N])