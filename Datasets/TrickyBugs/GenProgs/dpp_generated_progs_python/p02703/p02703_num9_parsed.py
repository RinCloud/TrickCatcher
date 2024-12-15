from heapq import heappop, heappush

# Read input
N, M, S = map(int, input().split())
graph = [[] for _ in range(N+1)]
for _ in range(M):
    U, V, A, B = map(int, input().split())
    graph[U].append((V, A, B))
    graph[V].append((U, A, B))
exchange = [(0, 0)]
for _ in range(N):
    C, D = map(int, input().split())
    exchange.append((C, D))

INF = float('inf')
# Dijkstra's Algorithm
dist = [INF] * (N+1)
dist[1] = 0
heap = [(0, 1, S)]
while heap:
    time, node, silver = heappop(heap)
    if time > dist[node]:
        continue
    for neighbor, cost_silver, cost_time in graph[node]:
        if silver < cost_silver:
            continue
        if time + cost_time < dist[neighbor]:
            dist[neighbor] = time + cost_time
            heappush(heap, (dist[neighbor], neighbor, silver - cost_silver))
    gold, gold_to_silver = exchange[node]
    if time + gold_to_silver < dist[node+1]:
        dist[node+1] = time + gold_to_silver
        heappush(heap, (dist[node+1], node+1, silver + gold))

# Print output
for i in range(2, N+1):
    print(dist[i])