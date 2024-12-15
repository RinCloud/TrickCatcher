from collections import deque

# Helper function to perform BFS starting from vertex v and repainting all vertices within distance d in color c
def bfs(graph, v, d, c):
    queue = deque([(v, 0)])  # queue to store vertices to visit and distance from v
    
    while queue:
        curr_v, dist = queue.popleft()
        
        # If curr_v is within distance d, repaint it in color c
        if dist <= d:
            colors[curr_v] = c
        
        # If dist is less than or equal to d, visit all the adjacent vertices of curr_v
        if dist < d:
            for adj_v in graph[curr_v]:
                queue.append((adj_v, dist + 1))


# Read the number of vertices and edges
N, M = map(int, input().split())
# Initialize the graph adjacency list
graph = [[] for _ in range(N+1)]
# Read the edges and construct the graph
for _ in range(M):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

# Read the number of operations
Q = int(input())

# Initialize the colors array with all vertices initially painted with color 0
colors = [0] * (N+1)

# Perform each operation
for _ in range(Q):
    v, d, c = map(int, input().split())
    bfs(graph, v, d, c)

# Print the colors of all vertices after the Q operations
for i in range(1, N+1):
    print(colors[i])