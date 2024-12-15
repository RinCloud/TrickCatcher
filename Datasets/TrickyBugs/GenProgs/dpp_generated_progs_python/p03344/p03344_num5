from collections import defaultdict
from heapq import heappop, heappush

def smallest_initial_amount(n, m, vertices, edges):
    graph = defaultdict(list)
    visited = [False] * (n+1)
    
    for u, v in edges:
        graph[u].append(v)
        graph[v].append(u)
        
    def dijkstra(start):
        queue = [(0, start)]
        distance = [float('inf')] * (n+1)
        distance[start] = 0
        
        while queue:
            cost, node = heappop(queue)
            
            if visited[node]:
                continue
            visited[node] = True
            
            for neigh in graph[node]:
                if distance[neigh] > distance[node] + vertices[neigh-1][0]:
                    distance[neigh] = distance[node] + vertices[neigh-1][0]
                    heappush(queue, (distance[neigh], neigh))
                    
        return distance
        
    distances = dijkstra(1)
    result = float('inf')
    
    for i in range(1, n+1):
        amount_required = vertices[i-1][1]
        if visited[i] and distances[i] >= amount_required:
            result = min(result, distances[i])
            
    return result

# read input
n, m = map(int, input().split())

vertices = []
for _ in range(n):
    a, b = map(int, input().split())
    vertices.append((a, b))
    
edges = []
for _ in range(m):
    u, v = map(int, input().split())
    edges.append((u, v))

# calculate and print the result
result = smallest_initial_amount(n, m, vertices, edges)
print(result)