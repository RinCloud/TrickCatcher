from collections import defaultdict
from queue import Queue

def bfs(graph, start, distance, color):
    visited = [False] * len(graph)
    visited[start - 1] = True
    distance[start - 1] = 0
    q = Queue()
    q.put(start)

    while not q.empty():
        curr = q.get()
        for neighbor in graph[curr]:
            if not visited[neighbor - 1]:
                visited[neighbor - 1] = True
                distance[neighbor - 1] = distance[curr - 1] + 1
                q.put(neighbor)

def main():
    # Read input
    N, M = map(int, input().split())
    graph = defaultdict(list)
    for _ in range(M):
        a, b = map(int, input().split())
        graph[a].append(b)
        graph[b].append(a)
    
    Q = int(input())
    operations = []
    for _ in range(Q):
        v, d, c = map(int, input().split())
        operations.append((v, d, c))
    
    # Solve the problem
    color = [0] * N
    distance = [-1] * N
    for v, d, c in operations:
        bfs(graph, v, distance, color)
        for i in range(N):
            if distance[i] <= d:
                color[i] = c
    
    # Print the output
    for c in color:
        print(c)

if __name__ == "__main__":
    main()