from collections import deque

def color_vertices(N, M, edges, Q, operations):
    vertex_colors = [0] * N
    graph = [[] for _ in range(N)]
    
    for a, b in edges:
        graph[a-1].append(b-1)
        graph[b-1].append(a-1)
    
    for v, d, c in operations:
        distance = [-1] * N
        distance[v-1] = 0
        queue = deque([v-1])
        
        while queue:
            current_vertex = queue.popleft()
            
            for neighbor in graph[current_vertex]:
                if distance[neighbor] == -1:
                    distance[neighbor] = distance[current_vertex] + 1
                    queue.append(neighbor)
                    
                    if distance[neighbor] <= d:
                        vertex_colors[neighbor] = c
    
    return vertex_colors


# Read input
N, M = map(int, input().split())
edges = [tuple(map(int, input().split())) for _ in range(M)]
Q = int(input())
operations = [tuple(map(int, input().split())) for _ in range(Q)]

# Calculate colors
result = color_vertices(N, M, edges, Q, operations)

# Print the answer
for color in result:
    print(color)