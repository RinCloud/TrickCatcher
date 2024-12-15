from heapq import heappop, heappush

def dijkstra(adj_list, start):
    n = len(adj_list)
    dist = [float('inf')] * n
    dist[start] = 0
    
    heap = [(0, start)]
    
    while heap:
        d, node = heappop(heap)
        
        if d > dist[node]:
            continue
        
        for neighbor, cost in adj_list[node]:
            new_dist = dist[node] + cost
            
            if new_dist < dist[neighbor]:
                dist[neighbor] = new_dist
                heappush(heap, (new_dist, neighbor))
    
    return dist

N, M, S = map(int, input().split())

G = [[] for _ in range(N+1)]
exchange = []

for _ in range(M):
    U, V, A, B = map(int, input().split())
    G[U].append((V, A, B))
    G[V].append((U, A, B))

for _ in range(N):
    C, D = map(int, input().split())
    exchange.append((C, D))

dist = dijkstra(G, 1)
cost = [float('inf')] * N
cost[0] = 0

for i in range(N):
    c, d = exchange[i]
    
    for j in range(i, 0, -1):
        cost[j] = min(cost[j], cost[j-1] + d)
    
    cost[0] += d
    
    for j in range(N):
        cost[j] = min(cost[j], cost[j] + c)
    
    for j in range(N):
        for v, a, b in G[j+1]:
            if dist[v] < dist[j] + a:
                cost[j] = min(cost[j], dist[v] + b + c)
    
    print(cost[0] + dist[i+1] * S)