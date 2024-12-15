from collections import defaultdict

def count_bridges(n, m, edges):
    # Initialize variables
    graph = defaultdict(list)
    visited = [False] * n
    disc = [float('inf')] * n
    low = [float('inf')] * n
    parent = [-1] * n
    bridges = 0
    time = 0
    
    # Build the graph
    for a, b in edges:
        graph[a].append(b)
        graph[b].append(a)
        
    # DFS to find bridges
    def dfs(u):
        nonlocal time
        
        # Mark the current node as visited
        visited[u] = True
        
        # Initialize discovery time and low value
        disc[u] = time
        low[u] = time
        time += 1
        
        # Go through all adjacent vertices of u
        for v in graph[u]:
            # If v is not visited, then recursively visit it
            if not visited[v]:
                parent[v] = u
                dfs(v)
                
                # Check if the subtree rooted with v has a connection to one of the ancestors of u
                low[u] = min(low[u], low[v])
                
                # If the lowest vertex reachable from subtree under v is below u in DFS tree, then u-v is a bridge
                if low[v] > disc[u]:
                    nonlocal bridges
                    bridges += 1
            # Update low value of u for parent function calls
            elif v != parent[u]:
                low[u] = min(low[u], disc[v])
    
    # Start DFS from vertex 0 (assuming 0 as root of the DFS tree)
    dfs(0)
    
    # Return the number of bridges
    return bridges

# Read the input
n, m = map(int, input().split())
edges = []
for _ in range(m):
    a, b = map(int, input().split())
    edges.append((a-1, b-1))

# Count the number of bridges
num_bridges = count_bridges(n, m, edges)

# Print the result
print(num_bridges)