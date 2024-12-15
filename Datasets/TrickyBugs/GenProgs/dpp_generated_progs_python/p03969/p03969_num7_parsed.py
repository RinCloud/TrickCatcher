MOD = 10**9 + 7

def dfs(v, parent, visited, adj_list):
    visited[v] = True
    cycle_edges = 0

    for u in adj_list[v]:
        if not visited[u]:
            cycle_edges += 1
            dfs(u, v, visited, adj_list)

    return cycle_edges

def count_ways(N, M, K, edges):
    adj_list = [[] for _ in range(N + 1)]
    visited = [False] * (N + 1)
    result = 1

    for u, v in edges:
        adj_list[u].append(v)
        adj_list[v].append(u)

    for v in range(1, N + 1):
        if not visited[v]:
            cycle_edges = dfs(v, -1, visited, adj_list)
            result = (result * pow(K, cycle_edges, MOD)) % MOD

    return result

N, M, K = map(int, input().split())
edges = [list(map(int, input().split())) for _ in range(M)]

ways = count_ways(N, M, K, edges)
print(ways)
