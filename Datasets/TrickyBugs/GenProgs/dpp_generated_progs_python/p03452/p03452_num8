from collections import defaultdict

def is_consistent(N, M, pieces):
    graph = defaultdict(list)

    for i in range(M):
        L, R, D = pieces[i]
        graph[L].append((R, D))
        graph[R].append((L, -D))

    coordinates = [None] * (N + 1)
    visited = [False] * (N + 1)

    for i in range(1, N + 1):
        if not visited[i]:
            coordinates[i] = 0
            visited[i] = True
            if not dfs(i, graph, coordinates, visited):
                return False

    return True

def dfs(v, graph, coordinates, visited):
    for neighbor, distance in graph[v]:
        if visited[neighbor]:
            if coordinates[neighbor] != coordinates[v] + distance:
                return False
        else:
            coordinates[neighbor] = coordinates[v] + distance
            visited[neighbor] = True
            if not dfs(neighbor, graph, coordinates, visited):
                return False

    return True

N, M = map(int, input().split())
pieces = []
for _ in range(M):
    L, R, D = map(int, input().split())
    pieces.append((L, R, D))

result = is_consistent(N, M, pieces)
if result:
    print("Yes")
else:
    print("No")