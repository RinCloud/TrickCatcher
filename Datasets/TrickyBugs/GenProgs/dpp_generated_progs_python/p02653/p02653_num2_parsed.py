N, A, B = map(int, input().split())

MOD = 10**9 + 7

dp = [0] * (N + 1)
dp[0] = 1

for i in range(1, N + 1):
    dp[i] = dp[i - 1] + dp[i - min(A, i)] if A <= i else dp[i - 1]
    dp[i] %= MOD

ans = 0
for i in range(B, N + 1):
    ans += dp[i]
    ans %= MOD

print(ans)