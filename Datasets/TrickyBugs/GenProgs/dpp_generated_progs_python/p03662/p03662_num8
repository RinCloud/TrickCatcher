from collections import deque

def bfs(graph, start):
    queue = deque()
    visited = [False] * len(graph)
    visited[start] = True
    queue.append(start)

    while queue:
        node = queue.popleft()
        for neighbor in graph[node]:
            if not visited[neighbor]:
                visited[neighbor] = True
                queue.append(neighbor)

    return visited

def fennec_or_snuke(n, edges):
    graph = [[] for _ in range(n + 1)]
    for a, b in edges:
        graph[a].append(b)
        graph[b].append(a)

    fennec_visited = bfs(graph, 1)
    snuke_visited = bfs(graph, n)

    fennec_score = snuke_score = 0
    for i in range(1, n + 1):
        if fennec_visited[i] and not snuke_visited[i]:
            fennec_score += 1
        if not fennec_visited[i] and snuke_visited[i]:
            snuke_score += 1

    if fennec_score > snuke_score:
        return "Fennec"
    else:
        return "Snuke"


# Read input
n = int(input())
edges = [tuple(map(int, input().split())) for _ in range(n - 1)]

# Print output
print(fennec_or_snuke(n, edges))