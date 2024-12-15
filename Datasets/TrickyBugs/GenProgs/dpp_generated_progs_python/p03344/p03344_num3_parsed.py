from collections import defaultdict

def dfs(node, graph, max_a, min_w):
    if max_a[node] < min_w:
        min_w = max_a[node]
    for neighbor in graph[node]:
        if max_a[neighbor] < min_w:
            min_w = max_a[neighbor]
        min_w = dfs(neighbor, graph, max_a, min_w)
    return min_w

def solve(N, M, AB, UV):
    graph = defaultdict(list)
    max_a = [0] * N
    for i in range(N):
        max_a[i] = AB[i][0]
    for u, v in UV:
        graph[u-1].append(v-1)
        graph[v-1].append(u-1)
    return dfs(0, graph, max_a, max_a[0])

# Read input
N, M = map(int, input().split())
AB = [tuple(map(int, input().split())) for _ in range(N)]
UV = [tuple(map(int, input().split())) for _ in range(M)]

# Solve the problem
ans = solve(N, M, AB, UV)

# Print the result
print(ans)