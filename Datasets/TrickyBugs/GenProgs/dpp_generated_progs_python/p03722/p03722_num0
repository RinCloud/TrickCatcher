from collections import defaultdict

def solve(n, m, edges):
    INF = float('inf')
    
    dist = [INF] * n
    dist[0] = 0
    
    for _ in range(n-1):
        for u, v, w in edges:
            if dist[u] + w < dist[v]:
                dist[v] = dist[u] + w
    
    # Bellman-Ford algorithm to find the shortest path distances
    
    for _ in range(n-1):
        for u, v, w in edges:
            if dist[u] + w < dist[v]:
                dist[v] = -INF
    
    # Detects negative cycles, any vertex reached from the negative cycle will have -INF as its distance
    
    if dist[n-1] == -INF:
        return "inf"
    else:
        return dist[n-1]

n, m = map(int, input().split())
edges = [list(map(int, input().split())) for _ in range(m)]

print(solve(n, m, edges))