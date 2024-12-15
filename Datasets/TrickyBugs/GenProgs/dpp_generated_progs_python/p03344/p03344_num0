# Program:

def dfs(v, parent, graph, A):
    min_cost = A[v]
    for u in graph[v]:
        if u != parent:
            min_cost = min(min_cost, dfs(u, v, graph, A))
    return min_cost

N, M = map(int, input().split())
graph = [[] for _ in range(N + 1)]
A = [0] * (N + 1)
B = [0] * (N + 1)
for i in range(1, N + 1):
    A[i], B[i] = map(int, input().split())
for _ in range(M):
    U, V = map(int, input().split())
    graph[U].append(V)
    graph[V].append(U)

print(dfs(1, -1, graph, A))