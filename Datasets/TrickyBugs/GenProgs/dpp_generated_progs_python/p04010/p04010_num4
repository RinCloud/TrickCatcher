from collections import defaultdict

# Function to find the minimum number of operations
def min_operations(n, m, edges):
    # Create an adjacency list to represent the graph
    graph = defaultdict(list)
    for u, v in edges:
        graph[u].append(v)
        graph[v].append(u)
    
    # Initialize the count of white vertices
    white_count = 0
    # Initialize the count of required operations
    operations = 0
    
    # DFS to count the number of white vertices
    def dfs(node, parent, color):
        nonlocal white_count
        if color[node] == 'W':
            white_count += 1
        for child in graph[node]:
            if child != parent:
                if color[child] == 'W':
                    color[child] = 'B'
                    color[node] = 'B'
                    white_count -= 2
                else:
                    color[node] = 'B'
                dfs(child, node, color)
    
    # Start DFS from the root node
    dfs(1, None, ['W'] * (n+1))
    
    # Check if it is possible to turn all vertices black
    if white_count > 0:
        return -1
    
    # Calculate the minimum number of operations
    for u, v in edges:
        if color[u] == color[v]:
            operations += 1
    
    return operations

# Read the input values
n, m = map(int, input().split())
edges = []
for _ in range(m):
    u, v = map(int, input().split())
    edges.append((u, v))

# Call the min_operations function and print the result
result = min_operations(n, m, edges)
print(result)