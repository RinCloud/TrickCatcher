N, Ma, Mb = map(int, input().split())
abc = [list(map(int, input().split())) for _ in range(N)]
inf = 10 ** 9
dp = [[[inf for _ in range(N * 10 + 1)] for _ in range(N * 10 + 1)] for _ in range(N + 1)]
dp[0][0][0] = 0
max_a = 0
max_b = 0
for i in range(N):
    max_a += abc[i][0]
    max_b += abc[i][1]
    for ai in range(max_a, abc[i][0] - 1, -1):
        for bi in range(max_b, abc[i][1] - 1, -1):
            dp[i + 1][ai][bi] = min(dp[i][ai][bi], dp[i][ai - abc[i][0]][bi - abc[i][1]] + abc[i][2])
ans = inf
for i in range(1, max_a // Ma + 1):
    for j in range(1, max_b // Mb + 1):
        ans = min(ans, dp[N][i * Ma][j * Mb])
if ans == inf:
    print(-1)
else:
    print(ans)
