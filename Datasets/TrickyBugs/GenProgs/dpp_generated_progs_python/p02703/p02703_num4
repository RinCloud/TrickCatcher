import heapq

def dijkstra(start, graph):
    n = len(graph)
    dist = [float('inf')] * n
    dist[start] = 0
    pq = [(0, start)]
  
    while pq:
        d, u = heapq.heappop(pq)
      
        if d > dist[u]:
            continue
      
        for v, w in graph[u]:
            if dist[u] + w < dist[v]:
                dist[v] = dist[u] + w
                heapq.heappush(pq, (dist[v], v))
  
    return dist

N, M, S = map(int, input().split())
graph = [[] for _ in range(N)]
exchange = []
  
for _ in range(M):
    u, v, a, b = map(int, input().split())
    u -= 1
    v -= 1
    graph[u].append((v, a, b))
    graph[v].append((u, a, b))
  
for _ in range(N):
    c, d = map(int, input().split())
    exchange.append((c, d))
  
distances = dijkstra(0, graph)
  
for i in range(1, N):
    c, d = exchange[i]
    time = float('inf')
  
    for j in range(i):
        time = min(time, distances[j] + d + distances[i] * c)
  
    print(time)