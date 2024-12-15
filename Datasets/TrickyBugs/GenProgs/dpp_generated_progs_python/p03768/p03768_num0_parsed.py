from collections import defaultdict, deque

# Read input
N, M = map(int, input().split())
edges = [tuple(map(int, input().split())) for _ in range(M)]
Q = int(input())
operations = [tuple(map(int, input().split())) for _ in range(Q)]

# Create graph
graph = defaultdict(list)
for a, b in edges:
    graph[a].append(b)
    graph[b].append(a)

# Initialize colors
colors = [0] * (N + 1)

# Perform operations
for v, d, c in operations:
    # Perform BFS to find vertices within distance d
    visited = [False] * (N + 1)
    queue = deque([(v, 0)])
    while queue:
        curr, dist = queue.popleft()
        if dist > d:  # Stop BFS if distance exceeds d
            break
        if not visited[curr]:  # Update color if not visited
            colors[curr] = c
            visited[curr] = True
            for neighbor in graph[curr]:
                if not visited[neighbor]:
                    queue.append((neighbor, dist + 1))

# Print colors
for i in range(1, N + 1):
    print(colors[i])