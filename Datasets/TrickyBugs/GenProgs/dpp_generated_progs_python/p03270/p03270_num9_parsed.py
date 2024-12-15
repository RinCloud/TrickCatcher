from collections import defaultdict

K, N = map(int, input().split())

mod = 998244353

dp = defaultdict(int)
dp[(0, 0)] = 1

for i in range(1, 2 * K + 1):
    for j in range(N):
        dp[(i, j)] = (dp[(i, j)] + dp[(i - 1, j)]) % mod
        if j >= 1:
            dp[(i, j)] = (dp[(i, j)] + dp[(i - 2, j - 1)]) % mod

for i in range(1, 2 * K + 1):
    ans = 0
    for j in range(N):
        ans = (ans + dp[(i, j)]) % mod
    print(ans)