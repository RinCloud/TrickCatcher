from typing import List, Tuple

def max_score(N: int, M: int, edges: List[Tuple[int, int, int]]) -> int:
    INF = float('inf')
    dist = [INF] * (N + 1)
    dist[1] = 0
  
    for _ in range(N - 1):
        for a, b, c in edges:
            dist[b] = max(dist[b], dist[a] + c)
  
    for a, b, c in edges:
        if dist[b] < dist[a] + c:
            return INF
  
    return dist[N]

N, M = map(int, input().split())
edges = [tuple(map(int, input().split())) for _ in range(M)]
print(max_score(N, M, edges))