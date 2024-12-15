"""
# Function to find the parent of a node
def find_parent(parent, i):
    if parent[i] == i:
        return i
    return find_parent(parent, parent[i])

# Function to perform union of two sets
def union(parent, rank, x, y):
    xroot = find_parent(parent, x)
    yroot = find_parent(parent, y)

    if rank[xroot] < rank[yroot]:
        parent[xroot] = yroot
    elif rank[xroot] > rank[yroot]:
        parent[yroot] = xroot
    else:
        parent[yroot] = xroot
        rank[xroot] += 1
        
# Function to check if graph exists based on the clues
def check_graph(N, M, Q, clues):
    parent = [i for i in range(N)]
    rank = [0 for _ in range(N)]

    for i in range(Q):
        a, b, c = clues[i]

        if c == 0:
            # If there is a path between a and b, they should be in the same set
            if find_parent(parent, a) != find_parent(parent, b):
                return 'No'
        else:
            # If there are multiple paths between a and b, they should be in different sets
            if find_parent(parent, a) == find_parent(parent, b):
                return 'No'

    return 'Yes'

# Read N, M, Q from input
N, M, Q = map(int, input().split())

# Initialize list to store clues
clues = []

# Read Q clues from input
for _ in range(Q):
    a, b, c = map(int, input().split())
    clues.append((a, b, c))

# Check if graph exists based on the clues
result = check_graph(N, M, Q, clues)

# Print the result
print(result)

"""