def solve():
    n = int(input())
    graph = [[] for _ in range(n + 1)]

    for _ in range(n - 1):
        x, y = map(int, input().split())
        graph[x].append(y)
        graph[y].append(x)

    def dfs(v, p):
        dp[v][0] = 1
        dp[v][1] = 1
        for u in graph[v]:
            if u == p:
                continue
            dfs(u, v)
            dp[v][1] *= dp[u][0]
            dp[v][1] %= MOD
            dp[v][0] *= dp[u][1]
            dp[v][0] %= MOD
        dp[v][0] += dp[v][1]
        dp[v][0] %= MOD

    def dfs2(v, p, up):
        ans[v] = up
        if up == dp[v][0]:
            for u in graph[v]:
                if u == p:
                    continue
                dfs2(u, v, dp[u][1])
        else:
            cnt = 1
            idx = 0
            for u in graph[v]:
                if u == p:
                    continue
                if dp[u][0] > dp[u][1]:
                    cnt = dp[u][1]
                    idx = u
                    break
            if cnt == 1:
                for u in graph[v]:
                    if u == p:
                        continue
                    dfs2(u, v, dp[u][0])
            else:
                for u in graph[v]:
                    if u == p:
                        continue
                    if u == idx:
                        dfs2(u, v, dp[u][0])
                    else:
                        dfs2(u, v, dp[u][1])

    MOD = 10**9 + 7
    dp = [[0 for _ in range(2)] for _ in range(n + 1)]
    ans = [0 for _ in range(n + 1)]
    dfs(1, 0)
    dfs2(1, 0, 0)

    res = 0
    for i in range(1, n + 1):
        res += ans[i]
        res %= MOD

    print(res)


solve()