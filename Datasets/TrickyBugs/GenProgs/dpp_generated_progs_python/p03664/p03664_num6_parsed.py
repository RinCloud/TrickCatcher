from collections import defaultdict
from heapq import heappop, heappush

def minimum_budget(N, M, edges):
    # Create adjacency list
    adj_list = defaultdict(list)
    for a, b, c in edges:
        adj_list[a].append((b, c))
        adj_list[b].append((a, c))

    # Dijkstra's algorithm
    dist = [float('inf')] * (N + 1)
    dist[1] = 0
    visited = [False] * (N + 1)
    pq = [(0, 1)]  # Priority queue
    while pq:
        cost, node = heappop(pq)
        if visited[node]:
            continue
        visited[node] = True
        for neighbor, edge_cost in adj_list[node]:
            if dist[node] + edge_cost < dist[neighbor]:
                dist[neighbor] = dist[node] + edge_cost
                heappush(pq, (dist[neighbor], neighbor))

    return dist[N]

# Read input
N, M = map(int, input().split())
edges = []
for _ in range(M):
    a, b, c = map(int, input().split())
    edges.append((a, b, c))

# Compute and print the minimum budget
print(minimum_budget(N, M, edges))