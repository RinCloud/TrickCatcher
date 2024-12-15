import itertools

def count_painted_edges(N, edges, M, restrictions):
    num_ways = 0
    
    # Generate all possible edge colorings
    edge_colorings = list(itertools.product([0, 1], repeat=N-1))
    
    # Check each edge coloring if it satisfies all restrictions
    for coloring in edge_colorings:
        valid = True
        
        # Check each restriction
        for restriction in restrictions:
            u, v = restriction
            
            # Check if the path between u and v contains at least one black edge
            if not path_contains_black_edge(u, v, coloring, edges):
                valid = False
                break
        
        # If the coloring satisfies all restrictions, increment the count
        if valid:
            num_ways += 1
    
    return num_ways

def path_contains_black_edge(u, v, coloring, edges):
    visited = [False] * len(edges)
    stack = [u]
    
    while stack:
        node = stack.pop()
        
        for i, edge in enumerate(edges):
            if node in edge:
                neighbor = edge[0] if edge[1] == node else edge[1]
                
                # Check if the edge between node and neighbor is black
                if coloring[i] == 1:
                    visited[i] = True
                
                # Add the neighbor to the stack if it is not visited yet
                if not visited[i] and neighbor != v:
                    stack.append(neighbor)
    
    return any(visited)

# Read input
N = int(input())
edges = [list(map(int, input().split())) for _ in range(N-1)]
M = int(input())
restrictions = [list(map(int, input().split())) for _ in range(M)]

# Count the number of ways to paint the edges
num_ways = count_painted_edges(N, edges, M, restrictions)

# Print the result
print(num_ways)