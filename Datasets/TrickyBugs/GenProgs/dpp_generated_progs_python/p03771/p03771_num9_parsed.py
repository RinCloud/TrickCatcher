import sys

N, V = map(int, sys.stdin.readline().split())
X = list(map(int, sys.stdin.readline().split()))

dp = [[0] * (N + 1) for _ in range(N + 1)]
dp[0][0] = V

for i in range(1, N + 1):
    jump = abs(X[i - 1] - X[i - 2])
    for j in range(i):
        if dp[i - 1][j] - jump >= 0:
            dp[i][j] = dp[i - 1][j] - jump
        else:
            break
        if dp[i][j] > 0:
            dp[i][j + 1] = dp[i][j] // 2

for i in range(N):
    if dp[N][i] > 0:
        print("Possible")
    else:
        print("Impossible")