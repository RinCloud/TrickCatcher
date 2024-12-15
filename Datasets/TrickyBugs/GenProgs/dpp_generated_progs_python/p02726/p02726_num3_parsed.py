# Program:

import queue

def bfs(graph, start):
    n = len(graph)
    visited = [False] * n
    dist = [0] * n

    q = queue.Queue()
    q.put(start)
    visited[start] = True

    while not q.empty():
        u = q.get()
        for v in graph[u]:
            if not visited[v]:
                visited[v] = True
                dist[v] = dist[u] + 1
                q.put(v)
    
    return dist

def solve(N, X, Y):
    graph = {i: [] for i in range(N)}
    
    for i in range(1, N):
        graph[i].append(i+1)
        graph[i+1].append(i)
    
    graph[X].append(Y)
    graph[Y].append(X)
    
    shortest_distances = bfs(graph, 1)
    pairs_count = [0] * N

    for i in range(1, N+1):
        for j in range(i+1, N+1):
            d = shortest_distances[i] + shortest_distances[j]
            pairs_count[d] += 1
    
    results = [0] * (N-1)
    for i in range(1, N):
        results[i-1] = pairs_count[i]
    
    return results

N, X, Y = map(int, input().split())
results = solve(N, X, Y)

for result in results:
    print(result)