# Python Program

N, Ma, Mb = map(int, input().split())
abc = [list(map(int, input().split())) for _ in range(N)]

INF = float('inf')
dp = [[[INF] * (401) for _ in range(401)] for _ in range(N + 1)]
dp[0][0][0] = 0

for i in range(1, N + 1):
    a, b, c = abc[i - 1]
    for j in range(401):
        for k in range(401):
            dp[i][j][k] = min(dp[i][j][k], dp[i - 1][j][k])
            if j >= a and k >= b:
                dp[i][j][k] = min(dp[i][j][k], dp[i - 1][j - a][k - b] + c)

ans = INF
for j in range(1, 401):
    for k in range(1, 401):
        if j * Mb == k * Ma:
            ans = min(ans, dp[N][j][k])

if ans == INF:
    print(-1)
else:
    print(ans)