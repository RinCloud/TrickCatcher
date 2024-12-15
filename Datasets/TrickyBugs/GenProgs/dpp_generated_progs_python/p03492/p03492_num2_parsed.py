from collections import defaultdict

def dfs(v, p):
    global ans
    cnt = 1
    for u in graph[v]:
        if u != p:
            dfs(u, v)
            cnt += dp[u]
            cnt %= MOD
    dp[v] = cnt
    ans += cnt * (N - cnt)
    ans %= MOD

MOD = 10**9 + 7
N = int(input())
graph = defaultdict(list)
for _ in range(N - 1):
    x, y = map(int, input().split())
    graph[x].append(y)
    graph[y].append(x)

dp = [0] * (N + 1)
ans = 0
dfs(1, -1)
print(ans)