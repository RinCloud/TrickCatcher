from itertools import permutations

def remove_edges(N, M, edges):
    graph = [[float('inf')] * N for _ in range(N)]
    for a, b, c in edges:
        graph[a-1][b-1] = c
        graph[b-1][a-1] = c

    dp = [[float('inf')] * N for _ in range(2 ** N)]
    dp[1][0] = 0

    for s in range(1, 2 ** N):
        for u in range(N):
            if dp[s][u] == float('inf'):
                continue
            for v in range(N):
                if not (s >> v & 1) and graph[u][v] != float('inf'):
                    dp[s | 1 << v][v] = min(dp[s | (1 << v)][v], dp[s][u] + graph[u][v])
    
    return dp[2 ** N - 1][N - 1]

N, M = map(int, input().split())
edges = [list(map(int, input().split())) for _ in range(M)]
print(remove_edges(N, M, edges))