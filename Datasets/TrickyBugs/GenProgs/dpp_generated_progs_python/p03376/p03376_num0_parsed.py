from collections import defaultdict

N, X, D = map(int, input().split())
M = [0] * N
P = [0] * N
for i in range(N):
    M[i], P[i] = map(int, input().split())

dp = defaultdict(int)
dp[0] = X

for i in range(N):
    dp_new = defaultdict(int)
    for j in range(i + 1):
        dp_new[j] = max(dp_new[j], dp[j])  # not using Moto i
        dp_new[j + 1] = max(dp_new[j + 1], dp[j] - M[i])  # using Moto i once
        dp_new[min(j + D + 1, N)] = max(dp_new[min(j + D + 1, N)], dp[j])  # using Moto i multiple times
    dp = dp_new

print(max(dp.values()))