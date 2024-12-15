import math

N = int(input())
AB = [list(map(int, input().split())) for _ in range(N)]

S = sum([AB[i][0] for i in range(N)])

dp = [[0] * (S + 1) for _ in range(N + 1)]
dp[0][0] = 1

for i in range(N):
    for j in range(S + 1):
        dp[i + 1][j] = dp[i][j]
        if j >= AB[i][0]:
            dp[i + 1][j] += dp[i + 1][j - AB[i][0]]

ans = 0
for i in range(N):
    for j in range(AB[i][1], S + 1):
        ans += dp[N][j] * dp[i][j - AB[i][1]]

q = 998244353
inv = pow(2, q - 2, q)
ans = ans * inv % q

print(ans)