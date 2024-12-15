from collections import deque

def solve(N, M, edges, Q, operations):
    # Initialize the colors of the vertices
    colors = [0] * (N+1)
    
    # Create the adjacency list representation of the graph
    graph = [[] for _ in range(N+1)]
    for a, b in edges:
        graph[a].append(b)
        graph[b].append(a)
    
    # Perform the Q operations
    for v, d, c in operations:
        # Perform BFS to find the vertices within distance d from v
        queue = deque([(v, 0)])  # (vertex, distance) tuple
        visited = [False] * (N+1)
        visited[v] = True
        
        while queue:
            curr_v, curr_d = queue.popleft()
            
            # Repaint the vertex if it is within distance d
            if curr_d <= d:
                colors[curr_v] = c
            
            # Add unvisited neighbors to the queue
            for neighbor in graph[curr_v]:
                if not visited[neighbor]:
                    queue.append((neighbor, curr_d+1))
                    visited[neighbor] = True
    
    return colors[1:]

# Read input
N, M = map(int, input().split())
edges = [list(map(int, input().split())) for _ in range(M)]
Q = int(input())
operations = [list(map(int, input().split())) for _ in range(Q)]

# Solve the problem
result = solve(N, M, edges, Q, operations)

# Print the result
for color in result:
    print(color)