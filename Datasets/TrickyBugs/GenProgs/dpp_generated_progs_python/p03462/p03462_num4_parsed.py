N, K = map(int, input().split())
s = input()

MOD = 10**9 + 7

# Initialize a DP table
dp = [[0] * (N + 1) for _ in range(K + 1)]
dp[0][0] = 1

for i in range(1, K + 1):
    # If the i-th character is 'r', we can choose between painting 0 to j-1 balls blue
    for j in range(N + 1):
        dp[i][j] += dp[i - 1][j]

    # If the i-th character is 'b', we can choose between painting 1 to j balls red
    for j in range(1, N + 1):
        dp[i][j] += dp[i - 1][j - 1]

    # Take modulo at each step to avoid overflow
    for j in range(N + 1):
        dp[i][j] %= MOD

# The total number of different sequences of colors after all operations is the sum of the last row in the DP table
ans = sum(dp[K]) % MOD

print(ans)