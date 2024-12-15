# Function to calculate the colorfulness of the tree T
def calculate_colorfulness(N, edges):
    # Initialize the colorfulness and number of leaves to a large value
    min_colorfulness = float('inf')
    min_leaves = float('inf')
    
    # For every possible new vertex (each vertex from 2 to N)
    for i in range(2, N+1):
        # Initialize the color map with the first vertex connected to the new vertex
        color_map = {1: 1}
        # Assign colors to the new vertex and its neighbors
        assign_colors(i, 1, color_map, edges)
        
        # Calculate the colorfulness of the current tree
        colorfulness = len(set(color_map.values()))
        
        # If the colorfulness is smaller than the minimum colorfulness
        if colorfulness < min_colorfulness:
            # Update the minimum colorfulness and number of leaves
            min_colorfulness = colorfulness
            min_leaves = count_leaves(color_map)
        # If the colorfulness is equal to the minimum colorfulness
        elif colorfulness == min_colorfulness:
            # Update the number of leaves if it is smaller
            min_leaves = min(min_leaves, count_leaves(color_map))
    
    # Return the minimum colorfulness and number of leaves
    return min_colorfulness, min_leaves


# Function to assign colors to the vertices of the tree
def assign_colors(vertex, parent, color_map, edges):
    # Get the neighbors of the current vertex
    neighbors = [v for u, v in edges if u == vertex or v == vertex]
    
    # Initialize the color for the current vertex
    color = 1
    
    # For each neighbor of the current vertex
    for neighbor in neighbors:
        # If the neighbor is not the parent of the current vertex
        if neighbor != parent:
            # Increment the color if it is already used
            if color_map.get(neighbor) == color:
                color += 1
            
            # Assign the color to the neighbor
            color_map[neighbor] = color
            
            # Assign colors to the neighbor's neighbors
            assign_colors(neighbor, vertex, color_map, edges)
            
            # Increment the color for the next neighbor
            color += 1


# Function to count the number of leaves in the tree
def count_leaves(color_map):
    # Count the number of leaves
    count = 0
    
    # For each vertex in the color map
    for vertex in color_map:
        # If the vertex is a leaf (degree 1)
        if list(color_map.values()).count(vertex) == 1:
            count += 1
    
    # Return the number of leaves
    return count


# Get the number of vertices
N = int(input())

# Get the edges of the tree
edges = []
for _ in range(N-1):
    a, b = map(int, input().split())
    edges.append((a, b))

# Calculate the minimum colorfulness and number of leaves
min_colorfulness, min_leaves = calculate_colorfulness(N, edges)

# Print the minimum colorfulness and number of leaves
print(min_colorfulness, min_leaves)