
import sys
sys.setrecursionlimit(100000)


def dfs(node, color):
    visited[node] = True
    colors[node] = color

    for child in graph[node]:
        if not visited[child]:
            dfs(child, color ^ 1)


N, M = map(int, input().split())

graph = [[] for _ in range(N + 1)]

for _ in range(M):
    X, Y, Z = map(int, input().split())
    graph[X].append(Y)
    graph[Y].append(X)

visited = [False] * (N + 1)
colors = [0] * (N + 1)

cost = 0
for i in range(1, N + 1):
    if not visited[i]:
        dfs(i, 1)
        cost += min(colors.count(1), colors.count(2))

print(cost)

