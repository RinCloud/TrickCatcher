from collections import defaultdict

def dfs(v, parent, adj, dp):
    dp[v][0] = 1
    for u in adj[v]:
        if u != parent:
            dfs(u, v, adj, dp)
            for i in range(1, len(adj)):
                dp[v][i] = (dp[v][i] + dp[u][i - 1]) % (10**9 + 7)
            dp[v][len(adj)] = (dp[v][len(adj)] + dp[u][len(adj) - 1]) % (10**9 + 7)

def solve(N, edges):
    adj = defaultdict(list)
    for x, y in edges:
        adj[x].append(y)
        adj[y].append(x)

    dp = [[0] * (len(adj) + 1) for _ in range(len(adj) + 1)]
    dfs(1, 0, adj, dp)
    return sum(dp[1]) % (10**9 + 7)

N = int(input())
edges = [tuple(map(int, input().split())) for _ in range(N - 1)]
print(solve(N, edges))