h, w = map(int, input().split())

blocked = [[] for _ in range(h)]
for i in range(h):
    a, b = map(int, input().split())
    for j in range(a-1, b):
        blocked[i].append(j)

dp = [[float('inf')] * w for _ in range(h+1)]
dp[0][0] = 0

for i in range(h):
    for j in range(w):
        if j in blocked[i]:
            continue
        if j > 0:
            dp[i][j] = min(dp[i][j], dp[i][j-1]+1)
        if i < h:
            dp[i+1][j] = min(dp[i+1][j], dp[i][j])

for i in range(h):
    if dp[i][-1] == float('inf'):
        print("-1")
    else:
        print(dp[i][-1])