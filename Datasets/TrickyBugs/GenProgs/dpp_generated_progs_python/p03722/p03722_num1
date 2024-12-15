from collections import deque

def maximum_score(N, M, edges):
    # Create adjacency list
    graph = [[] for _ in range(N)]
    for a, b, c in edges:
        graph[a-1].append((b-1, c))

    # Initialize distances
    dist = [float('-inf')] * N
    dist[0] = 0

    # Perform Bellman-Ford algorithm
    queue = deque([0])
    in_queue = [False] * N
    in_queue[0] = True
    num_iterations = 0

    while queue:
        num_iterations += 1
        if num_iterations > N:
            return 'inf'

        u = queue.popleft()
        in_queue[u] = False

        for v, c in graph[u]:
            if dist[u] + c > dist[v]:
                dist[v] = dist[u] + c
                if not in_queue[v]:
                    queue.append(v)
                    in_queue[v] = True

    return dist[-1]


# Read input
N, M = map(int, input().split())
edges = []
for _ in range(M):
    a, b, c = map(int, input().split())
    edges.append((a, b, c))

# Calculate maximum score
result = maximum_score(N, M, edges)

# Print result
print(result)