h, n = map(int, input().split())
a = [list(map(int, input().split())) for i in range(n)]
inf = 10 ** 4 + 2 * 10 ** 3
dp = [float('inf')] * (h + 1)
dp[0] = 0
for i in range(1, h + 1):
    for j in range(n):
        if i - a[j][0] >= 0:
            dp[i] = min(dp[i], dp[i - a[j][0]] + a[j][1])
print(dp[h])