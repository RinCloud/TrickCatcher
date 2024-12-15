from collections import deque

def bfs(start, graph, oasis):
    visited = [False] * len(graph)
    visited[start] = True
    queue = deque([start])
    while queue:
        current = queue.popleft()
        for neighbor in graph[current]:
            if not visited[neighbor]:
                visited[neighbor] = True
                queue.append(neighbor)
    return visited[oasis]

def is_possible(N, V, oases):
    graph = [[] for _ in range(N)]
    for i in range(N):
        for j in range(i + 1, N):
            cost = abs(oases[j] - oases[i])
            if cost <= V:
                graph[i].append(j)
                graph[j].append(i)
    
    result = []
    for oasis in range(N):
        result.append('Possible' if bfs(oasis, graph, oasis) else 'Impossible')
    
    return result


# Read input
N, V = map(int, input().split())
oases = list(map(int, input().split()))

# Call function and print result
result = is_possible(N, V, oases)
for res in result:
    print(res)