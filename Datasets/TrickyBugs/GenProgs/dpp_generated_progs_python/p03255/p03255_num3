# Python program for the given task

n, x = map(int, input().split())
a = list(map(int, input().split()))

inf = float('inf')
dp = [inf] * n
dp[0] = a[0] * x

for i in range(1, n):
    for j in range(i):
        dp[i] = min(dp[i], dp[j] + max(0, (a[i] - a[j]) * x))

print(dp[-1])