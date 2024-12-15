from collections import defaultdict

MOD = 10**9 + 7

def dfs(v, p, dist, graph, subtree_size):
    subtree_size[v] = 1
    for u in graph[v]:
        if u != p:
            dfs(u, v, dist, graph, subtree_size)
            subtree_size[v] += subtree_size[u]
            dist[v] += dist[u] + subtree_size[u]

def dfs2(v, p, dist, graph, subtree_size, dp):
    dp[v] = dist[v]
    for u in graph[v]:
        if u != p:
            dist[v] -= dist[u] + subtree_size[u]
            subtree_size[v] -= subtree_size[u]
            dist[u] += dist[v] + subtree_size[v]
            subtree_size[u] += subtree_size[v]
            dfs2(u, v, dist, graph, subtree_size, dp)
            subtree_size[u] -= subtree_size[v]
            dist[u] -= dist[v] + subtree_size[v]
            subtree_size[v] += subtree_size[u]
            dist[v] += dist[u] + subtree_size[u]

def solve(n, edges):
    graph = defaultdict(list)
    for u, v in edges:
        graph[u].append(v)
        graph[v].append(u)

    dist = [0] * (n+1)
    subtree_size = [0] * (n+1)
    dfs(1, 0, dist, graph, subtree_size)

    dp = [0] * (n+1)
    dfs2(1, 0, dist, graph, subtree_size, dp)

    return sum(dp) % MOD

n = int(input())
edges = [list(map(int, input().split())) for _ in range(n-1)]
print(solve(n, edges))