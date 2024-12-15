from collections import defaultdict

N, X = map(int, input().split())
A = [int(input(), 2) for _ in range(N)]

mod = 998244353

dp = defaultdict(int)
dp[0] = 1

for i in range(N):
    for j in range(X, -1, -1):
        if dp[j]:
            dp[j ^ A[i]] = (dp[j ^ A[i]] + dp[j]) % mod
            dp[j * 2] = (dp[j * 2] + dp[j]) % mod

ans = 0
for i in range(X + 1):
    ans = (ans + dp[i]) % mod

print(ans)