N, K = map(int, input().split())

# Initialize a dynamic programming array of size K+1 and modulo value 10^9+7
dp = [0] * (K + 1)
dp[0] = 1  # Base case, there is 1 sequence of length 0

# Iterate over the possible lengths of sequences
for i in range(1, K + 1):
    # Calculate the number of valid sequences of length i
    for j in range(1, min(N + 1, i + 1)):
        # Add the number of valid sequences of length i-j to dp[i]
        dp[i] = (dp[i] + dp[i - j]) % (10 ** 9 + 7)

# Print the number of valid sequences of length K
print(dp[K])