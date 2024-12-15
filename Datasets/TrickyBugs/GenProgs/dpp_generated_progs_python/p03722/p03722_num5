from collections import defaultdict

def maximize_score(N, M, edges):
    graph = defaultdict(list)
    for a, b, c in edges:
        graph[a].append((b, c))
    
    visited = [False] * (N + 1)
    score = [float('-inf')] * (N + 1)
    score[1] = 0

    def dfs(v):
        visited[v] = True
        for u, c in graph[v]:
            if not visited[u]:
                dfs(u)
            score[u] = max(score[u], score[v] + c)
        visited[v] = False
    
    dfs(1)
    if score[N] == float('-inf'):
        return "inf"
    return score[N]

# Read input N and M
N, M = map(int, input().split())

# Read M edges
edges = [list(map(int, input().split())) for _ in range(M)]

# Call the function and print the result
print(maximize_score(N, M, edges))