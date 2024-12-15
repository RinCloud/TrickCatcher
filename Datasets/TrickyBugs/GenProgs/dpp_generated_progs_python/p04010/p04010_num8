from collections import defaultdict

def dfs(v, color, graph):
    color[v] = 1
    for u in graph[v]:
        if color[u] == 1:
            continue
        if not dfs(u, color, graph):
            return False
    color[v] = 2
    return True

def solve(N, M, edges):
    color = [0] * (N+1)
    graph = defaultdict(list)
    for u, v in edges:
        graph[u].append(v)
        graph[v].append(u)
    if not dfs(1, color, graph):
        return -1
    cnt = 0
    for i in range(1, N+1):
        if color[i] == 2:
            cnt += 1
    if cnt == N:
        return 0
    return cnt - 1

N, M = map(int, input().split())
edges = [tuple(map(int, input().split())) for _ in range(M)]

ans = solve(N, M, edges)
print(ans)