"""
# Function to find the root of a vertex
def find_parent(parent, vertex):
    if parent[vertex] == vertex:
        return vertex
    parent[vertex] = find_parent(parent, parent[vertex])
    return parent[vertex]

# Function to combine two connected components
def union(parent, rank, vertex1, vertex2):
    parent1 = find_parent(parent, vertex1)
    parent2 = find_parent(parent, vertex2)
    
    if rank[parent1] < rank[parent2]:
        parent[parent1] = parent2
    elif rank[parent1] > rank[parent2]:
        parent[parent2] = parent1
    else:
        parent[parent1] = parent2
        rank[parent2] += 1

# Main function to check if the graph matches the clues
def graph_matches(N, M, Q, clues):
    parent = [i for i in range(N)]
    rank = [0 for i in range(N)]
    num_components = N
    
    for clue in clues:
        vertex1 = clue[0]
        vertex2 = clue[1]
        is_same_path = clue[2]
        
        # If there was exactly one simple path
        if is_same_path == 0:
            # Check if the vertices belong to the same connected component
            parent1 = find_parent(parent, vertex1)
            parent2 = find_parent(parent, vertex2)
            if parent1 != parent2:
                union(parent, rank, parent1, parent2)
                num_components -= 1
        # If there were multiple simple paths
        else:
            # Check if the vertices belong to different connected components
            parent1 = find_parent(parent, vertex1)
            parent2 = find_parent(parent, vertex2)
            if parent1 == parent2:
                return "No"
    
    # Check if all the remaining vertices are connected
    if num_components > 1:
        return "No"
    return "Yes"

# Read input values
N, M, Q = map(int, input().split())
clues = []
for _ in range(Q):
    A, B, C = map(int, input().split())
    clues.append((A, B, C))

# Check if the graph matches the clues
result = graph_matches(N, M, Q, clues)

# Print the result
print(result)
"""