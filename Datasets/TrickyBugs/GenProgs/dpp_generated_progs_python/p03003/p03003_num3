# Here's a program that calculates the number of pairs of subsequences in S and T that are the same in content.

N, M = map(int, input().split())
S = list(map(int, input().split()))
T = list(map(int, input().split()))

MOD = 10**9 + 7

# Create a 2D list to store the number of pairs of subsequences
dp = [[0] * (M+1) for _ in range(N+1)]

# Initialize the first row and column of the dp matrix
for i in range(N+1):
    dp[i][0] = 1

for j in range(M+1):
    dp[0][j] = 1

# Calculate the number of pairs of subsequences using dynamic programming
for i in range(1, N+1):
    for j in range(1, M+1):
        # If the current elements in S and T are equal, add the number of pairs
        if S[i-1] == T[j-1]:
            dp[i][j] = (dp[i-1][j] + dp[i][j-1] + 1) % MOD
        else:
            dp[i][j] = (dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1]) % MOD

# Print the result
print(dp[N][M])