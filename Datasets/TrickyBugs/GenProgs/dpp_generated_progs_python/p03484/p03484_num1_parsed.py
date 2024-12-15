from collections import deque

# Read input values
N = int(input())
edges = [[] for _ in range(N)]
for _ in range(N-1):
    a, b = map(int, input().split())
    edges[a-1].append(b-1)
    edges[b-1].append(a-1)

# Function to calculate the diameter of a tree
def calculate_diameter(v):
    queue = deque([(v, 0)])
    visited = [False] * N
    visited[v] = True
    max_distance = 0
    farthest_vertex = v

    while queue:
        vertex, distance = queue.popleft()

        if distance > max_distance:
            max_distance = distance
            farthest_vertex = vertex

        for neighbor in edges[vertex]:
            if not visited[neighbor]:
                queue.append((neighbor, distance + 1))
                visited[neighbor] = True
    
    return farthest_vertex, max_distance

# Calculate the diameter of the tree
(v1, _) = calculate_diameter(0)
(_, diameter) = calculate_diameter(v1)

A = 0
B = 0

# Case 1: All vertices are on the diameter
if diameter % 2 == 0:
    A = diameter // 2
    B = 1

# Case 2: Some vertices are not on the diameter
else:
    A = (diameter + 1) // 2
    B = 3

print(A, B)