# Function to count the number of ways to paint the edges that satisfy all the conditions
def count_painted_edges(N, edges, M, restrictions):
    
    # Create an adjacency list to represent the tree
    adj_list = [[] for _ in range(N + 1)]
    for edge in edges:
        u, v = edge
        adj_list[u].append(v)
        adj_list[v].append(u)
    
    # Initialize a variable to store the count of valid paintings
    count = 0
    
    # Iterate over all possible edge paint combinations
    for i in range(2 ** (N - 1)):
        
        # Initialize a list to store the color of each edge
        colors = [0] * (N - 1)
        
        # Convert the integer to binary and assign the corresponding colors to the edges
        for j in range(N - 1):
            colors[j] = (i >> j) & 1
        
        # Check if the current painting satisfies all the restrictions
        valid = True
        for restriction in restrictions:
            u, v = restriction
            
            # Perform a depth-first search to check if there is at least one black edge between u and v
            stack = [u]
            visited = [False] * (N + 1)
            visited[u] = True
            black_edge_found = False
            
            while stack:
                node = stack.pop()
                
                if node == v and black_edge_found:
                    break
                
                for neighbor in adj_list[node]:
                    if not visited[neighbor]:
                        visited[neighbor] = True
                        
                        # Check if the edge is black
                        if (node < neighbor and colors[node] == 1) or (node > neighbor and colors[neighbor - 1] == 1):
                            black_edge_found = True
                            break
                            
                        stack.append(neighbor)
        
            # If no black edge is found between u and v, the current painting is invalid
            if not black_edge_found:
                valid = False
                break
        
        # If the current painting is valid, increment the count
        if valid:
            count += 1
    
    # Return the count of valid paintings
    return count

# Read the input
N = int(input())
edges = [tuple(map(int, input().split())) for _ in range(N - 1)]
M = int(input())
restrictions = [tuple(map(int, input().split())) for _ in range(M)]

# Count the number of ways to paint the edges that satisfy all the conditions
result = count_painted_edges(N, edges, M, restrictions)

# Print the result
print(result)