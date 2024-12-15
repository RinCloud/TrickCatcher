# Program

from collections import defaultdict

# Function to find bridges in a graph
def find_bridges(graph):
    # Initialize visited array and low value for each vertex
    visited = [False] * len(graph)
    low = [float('inf')] * len(graph)
    
    # Initialize bridge count
    bridges = 0
    
    # Initialize parent array
    parent = [-1] * len(graph)
    
    # DFS to find bridges
    def dfs(vertex):
        # Mark vertex as visited
        visited[vertex] = True
        
        # Set discovery time and low value for current vertex
        discovery_time = low_value = 0
        
        # Traverse adjacent vertices of current vertex
        for neighbor in graph[vertex]:
            # If neighbor is not visited, update parent and call dfs recursively
            if not visited[neighbor]:
                parent[neighbor] = vertex
                dfs(neighbor)
                
                # Update low value of current vertex based on low value of neighbor
                low[vertex] = min(low[vertex], low[neighbor])
                
                # If low value of neighbor is greater than discovery time of current vertex, it's a bridge
                if low[neighbor] > discovery_time:
                    nonlocal bridges
                    bridges += 1
            # If neighbor is already visited and not parent of current vertex, update low value of current vertex
            elif neighbor != parent[vertex]:
                low[vertex] = min(low[vertex], low[neighbor])
    
    # Call dfs for each unvisited vertex
    for v in range(len(graph)):
        if not visited[v]:
            dfs(v)
    
    return bridges

# Read input values
N, M = map(int, input().split())

# Create adjacency list
graph = defaultdict(list)

# Read edges and populate graph
for _ in range(M):
    a, b = map(int, input().split())
    graph[a-1].append(b-1)
    graph[b-1].append(a-1)

# Find bridges in the graph
bridges = find_bridges(graph)

# Print the number of bridges
print(bridges)