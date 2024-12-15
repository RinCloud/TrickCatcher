from collections import defaultdict
from queue import Queue

def bfs(graph, source, distance, color):
    q = Queue()
    q.put(source)
    distance[source] = 0
    while not q.empty():
        u = q.get()
        for v in graph[u]:
            if distance[v] == -1:
                distance[v] = distance[u] + 1
                color[v] = color[u]

def solve(N, M, edges, Q, queries):
    graph = defaultdict(list)
    for u, v in edges:
        graph[u].append(v)
        graph[v].append(u)

    colors = [0] * (N + 1)
    distances = [-1] * (N + 1)
    for source, d, c in queries:
        bfs(graph, source, distances, colors)
        for i in range(1, N + 1):
            if distances[i] <= d:
                colors[i] = c
        distances = [-1] * (N + 1)

    return colors[1:]

N, M = map(int, input().split())
edges = []
for _ in range(M):
    u, v = map(int, input().split())
    edges.append((u, v))
Q = int(input())
queries = []
for _ in range(Q):
    v, d, c = map(int, input().split())
    queries.append((v, d, c))

colors = solve(N, M, edges, Q, queries)
for color in colors:
    print(color)