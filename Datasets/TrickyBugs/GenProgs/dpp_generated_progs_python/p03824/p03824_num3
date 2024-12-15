# Helper function to calculate the uninity of a tree
def calculate_uninity(adj_list, vertex):
    children_uninity = []

    # Loop through all the children of the current vertex
    for child in adj_list[vertex]:
        children_uninity.append(1 + calculate_uninity(adj_list, child))
    
    # Return 0 if there are no children, otherwise return the maximum uninity of the children
    return max(children_uninity) if children_uninity else 0

# Read the input values
N = int(input())
edges = []

# Read the edges
for _ in range(N-1):
    a, b = map(int, input().split())
    edges.append((a, b))

# Create adjacency list to represent the tree
adj_list = [[] for _ in range(N+1)]
for a, b in edges:
    adj_list[a].append(b)

# Calculate the uninity of the tree starting from the root vertex (vertex 1)
uninity = calculate_uninity(adj_list, 1)

# Print the minimum k such that the given tree is a tree of uninity k
print(uninity)