N, M = map(int, input().split())
S = list(map(int, input().split()))
T = list(map(int, input().split()))

MOD = 10**9+7

# Create a 2D-DP table to store the number of pairs of subsequences
dp = [[0] * (M+1) for _ in range(N+1)]

# Initialize the first row and column with 1
# This represents empty subsequences
for i in range(N+1):
    dp[i][0] = 1
for j in range(M+1):
    dp[0][j] = 1

# Fill in the DP table
for i in range(1, N+1):
    for j in range(1, M+1):
        # If the current elements are equal, we have two choices:
        # 1. Include both elements in the subsequences
        # 2. Exclude the element from T
        if S[i-1] == T[j-1]:
            dp[i][j] = (dp[i-1][j-1] + dp[i][j-1]) % MOD
        # If the current elements are not equal, we can only exclude
        # the element from T
        else:
            dp[i][j] = dp[i][j-1]

# The answer is the value at the bottom-right corner of the DP table
print(dp[N][M])