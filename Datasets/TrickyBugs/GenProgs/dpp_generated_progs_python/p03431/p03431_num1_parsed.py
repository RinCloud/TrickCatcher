MOD = 998244353

N, K = map(int, input().split())

dp = [0] * (K+1)
dp[0] = 1

for i in range(1, K+1):
    dp[i] = dp[i-1] * N

for i in range(K-1, 0, -1):
    dp[i] += dp[i+1] * (N-1)
    dp[i] %= MOD

print(dp[1])