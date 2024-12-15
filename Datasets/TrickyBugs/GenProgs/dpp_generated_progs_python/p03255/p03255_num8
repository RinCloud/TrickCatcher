N, X = map(int, input().split())
x = list(map(int, input().split()))

dp = [float('inf')] * (N + 1)
dp[0] = 0

for i in range(1, N + 1):
    for j in range(i):
        cost = X * ((x[i - 1] - x[j]) ** 2)
        dp[i] = min(dp[i], dp[j] + cost)

print(dp[N])