N, A, B = map(int, input().split())

# Initialize a list to store the number of different strings
dp = [0] * (N + 1)

# Set dp[0] to 1 since there is only one possible string when x is empty
dp[0] = 1

MOD = 10**9 + 7

# Iterate through each character in x
for i in range(1, N + 1):
    # Initialize dp[i] to dp[i-1] and add the number of different strings
    # that can be obtained by performing the A operation on the last A characters.
    dp[i] = dp[i - 1]
    if i >= A:
        dp[i] = (dp[i] + dp[i - A]) % MOD
    
    # Add the number of different strings that can be obtained by performing
    # the B operation on the last B characters.
    if i >= B:
        dp[i] = (dp[i] + dp[i - B]) % MOD

# Print the number of different strings that x can be
print(dp[N])