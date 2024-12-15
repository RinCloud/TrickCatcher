N, Ma, Mb = map(int, input().split())
abc = [list(map(int, input().split())) for _ in range(N)]
inf = 10**9
max_a = sum([x[0] for x in abc])
max_b = sum([x[1] for x in abc])
dp = [[inf for i in range(max_a + 1)] for j in range(max_b + 1)]
dp[0][0] = 0
for i in range(N):
    for ai in range(max_a, abc[i][0] - 1, -1):
        for bi in range(max_b, abc[i][1] - 1, -1):
            dp[ai][bi] = min(dp[ai][bi], dp[ai - abc[i][0]][bi - abc[i][1]] + abc[i][2])
ans = inf
for i in range(1, max_a // Ma + 1):
    for j in range(1, max_b // Mb + 1):
        ans = min(ans, dp[i * Ma][j * Mb])
if ans == inf:
    print(-1)
else:
    print(ans)