import sys
sys.setrecursionlimit(10**9)
from collections import defaultdict
from itertools import accumulate

def dfs(v, p, dp, cnt, g):
    res1, res2 = [], []
    for u in g[v]:
        if u == p:
            continue
        dfs(u, v, dp, cnt, g)
        res1.append(dp[u] + cnt[u])
        res2.append(dp[u])

    res1.append(1)
    res2 += [0]
    res2 += [0] * (len(res1) - 2)

    res1 = list(accumulate(res1, initial=0))
    res2 = list(accumulate(res2, initial=0))

    dp[v] = res1[-1]

    for i in range(len(g[v])):
        u = g[v][i]
        if u == p:
            continue
        val = dp[u] + cnt[u]
        res1[i+1] -= val
        res2[i+1] += val

    for i in range(len(g[v])-1):
        res1[i+2] += res1[i+1]
        res2[i+2] += res2[i+1]

    for i in range(1, len(g[v])):
        res1[i] += res2[i-1]

    dp[v] += res1[-1]
    dp[v] %= MOD

N = int(input())
MOD = 10**9 + 7
g = defaultdict(list)
for _ in range(N-1):
    x, y = map(int, input().split())
    g[x].append(y)
    g[y].append(x)

dp = [0] * (N+1)
cnt = [0] * (N+1)
dfs(1, -1, dp, cnt, g)

ans = dp[1]
print(ans)