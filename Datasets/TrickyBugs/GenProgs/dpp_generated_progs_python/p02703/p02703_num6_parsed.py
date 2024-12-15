from heapq import heappush, heappop
INF = float('inf')

def dijkstra(G, num_cities):
    dist = [INF] * num_cities
    heap = []
    dist[0] = 0
    heappush(heap, (0, 0))
    while heap:
        d, u = heappop(heap)
        if d > dist[u]:
            continue
        for v, w in G[u]:
            if dist[u] + w < dist[v]:
                dist[v] = dist[u] + w
                heappush(heap, (dist[v], v))
    return dist

N, M, S = map(int, input().split())
railroads = [list(map(int, input().split())) for _ in range(M)]
exchanges = [list(map(int, input().split())) for _ in range(N)]

G = [[] for _ in range(N)]
for u, v, a, b in railroads:
    G[u - 1].append((v - 1, a, b))
    G[v - 1].append((u - 1, a, b))

dist = dijkstra(G, N)
ans = []
for c, d in exchanges:
    time = INF
    for v, w, t in zip(dist, exchanges[1:], range(2, N+1)):
        if v + c <= S:
            time = min(time, v * d + w[1])
    ans.append(time)

print(*ans, sep='\n')