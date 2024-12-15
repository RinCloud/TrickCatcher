import sys
sys.setrecursionlimit(10**8)
stdin = sys.stdin


def ni(): return int(ns())


def na(): return list(map(int, stdin.readline().split()))


def naa(N): return [na() for _ in range(N)]


def ns(): return stdin.readline().rstrip()  # ignore trailing spaces


N, W = na()
INF = 10 ** 12
dp = [[-INF] * (N*3+1) for _ in range(N+1)]
dp[0][0] = 0
for i in range(N):
    w, v = na()
    if i == 0:
        w1 = w
    w -= w1
    for j in range(i+1, 0, -1):
        for k in range(N*3, -1, -1):
            if k >= w:
                dp[j][k] = max(dp[j][k], dp[j-1][k-w] + v)

ans = 0
for i in range(1, N+1):
    wmax = W - w1 * i
    if wmax < 0:
        break
    ans = max(ans, max(dp[i][0:min(N, wmax) + 1]))

print(ans)