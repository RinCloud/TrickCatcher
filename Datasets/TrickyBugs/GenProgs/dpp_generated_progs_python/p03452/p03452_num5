from collections import defaultdict
from queue import Queue

def bfs(graph, visited, start):
    queue = Queue()
    queue.put(start)
    visited[start] = True
    
    while not queue.empty():
        current = queue.get()
        
        for neighbor in graph[current]:
            if not visited[neighbor]:
                queue.put(neighbor)
                visited[neighbor] = True

N, M = map(int, input().split())
info = []
graph = defaultdict(list)

for _ in range(M):
    L, R, D = map(int, input().split())
    info.append((L, R, D))
    graph[L].append(R)
    graph[R].append(L)

visited = [False] * (N+1)

for i in range(1, N+1):
    if not visited[i]:
        bfs(graph, visited, i)

result = 'Yes'
for L, R, D in info:
    if (R in graph[L] and L in graph[R]) or abs(graph[R] - graph[L]) != D:
        result = 'No'
        break

print(result)