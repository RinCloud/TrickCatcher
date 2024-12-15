# Read input
N, M = map(int, input().split())
a = []
for _ in range(M):
    a.append(int(input()))

# Initialize dp array
dp = [0] * (N+1)
dp[0] = 1
dp[1] = 1

# Fill dp array
for i in range(2, N + 1):
    if i not in a:
        dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007

# Print result
print(dp[N])