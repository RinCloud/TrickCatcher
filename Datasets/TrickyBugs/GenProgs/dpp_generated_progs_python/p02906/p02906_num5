"""
# Helper function to find the parent of a vertex using union-find algorithm
def find_parent(parent, i):
    if parent[i] == -1:
        return i
    if parent[i] != i:
        parent[i] = find_parent(parent, parent[i])
    return parent[i]

# Function to determine if there exists a graph that matches the given clues
def check_graph(N, M, Q, clues):
    # Create a list to store the parent of each vertex
    parent = [-1] * N

    # Iterate through the clues
    for a, b, c in clues:
        # If there was exactly one simple path from vertex a to b
        if c == 0:
            parent_a = find_parent(parent, a)
            parent_b = find_parent(parent, b)
            # If the parent of vertex a and vertex b are the same, it means they are already connected
            # which contradicts the clue
            if parent_a == parent_b:
                return False
            # Union the vertices
            parent[parent_a] = parent_b
        # If there were two or more simple paths from vertex a to b
        else:
            # If the parent of vertex a and vertex b are not the same, it means they are not connected
            # which contradicts the clue
            if find_parent(parent, a) != find_parent(parent, b):
                return False

    return True

# Read the input variables
N, M, Q = map(int, input().split())

clues = []
# Read the clues
for _ in range(Q):
    a, b, c = map(int, input().split())
    clues.append((a, b, c))

# Check if there exists a graph that matches the given clues
if check_graph(N, M, Q, clues):
    print("Yes")
else:
    print("No")
"""