import sys

# Read input
N, K = map(int, sys.stdin.readline().split())

# Calculate answer modulo 924844033
mod = 924844033

# Initialize factorial array
factorial = [1] * (N+1)
for i in range(1, N+1):
    factorial[i] = (factorial[i-1] * i) % mod

# Initialize dynamic programming array
dp = [[0] * (N+1) for _ in range(N+1)]
dp[0][0] = 1

# Dynamic programming
for i in range(1, N+1):
    for j in range(0, N+1):
        if j >= K:
            dp[i][j] = (dp[i][j] + dp[i-1][j-K] * (i-1)) % mod
        dp[i][j] = (dp[i][j] + dp[i-1][j] * i) % mod

# Calculate the final answer
answer = 0
for i in range(0, N+1):
    answer = (answer + dp[N][i] * factorial[N-i]) % mod

# Print the answer
print(answer)