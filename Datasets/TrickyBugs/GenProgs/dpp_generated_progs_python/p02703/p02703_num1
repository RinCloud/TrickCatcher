# Code

import heapq

# Read input
N, M, S = map(int, input().split())
edges = [[] for _ in range(N)]
for _ in range(M):
    U, V, A, B = map(int, input().split())
    U -= 1
    V -= 1
    edges[U].append((V, A, B))
    edges[V].append((U, A, B))
exchange = [tuple(map(int, input().split())) for _ in range(N)]

# Dijkstra's algorithm
INF = 1e18
dist = [INF] * N
dist[0] = 0
pq = [(0, 0, S)]
while pq:
    time, node, silver = heapq.heappop(pq)
    if dist[node] < time:
        continue
    for v, A, B in edges[node]:
        if silver < A:
            continue
        if dist[v] > time + B:
            dist[v] = time + B
            heapq.heappush(pq, (dist[v], v, silver - A))
    gold = silver // exchange[node][0]
    if dist[node] + gold * exchange[node][1] < dist[node] + (gold + 1) * exchange[node][1]:
        if dist[node] + gold * exchange[node][1] < dist[node]:
            dist[node] = dist[node] + gold * exchange[node][1]
            heapq.heappush(pq, (dist[node], node, silver - gold * exchange[node][0]))

# Print output
for i in range(1, N):
    print(dist[i])