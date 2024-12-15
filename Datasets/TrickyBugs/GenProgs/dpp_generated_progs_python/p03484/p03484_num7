# Generate tree
def generate_tree(N, edges):
    tree = {}
    for i in range(N):
        tree[i + 1] = []
    
    for a, b in edges:
        tree[a].append(b)
        tree[b].append(a)
    
    return tree

# Depth-first search
def dfs(node, parent, path_lengths, max_length):
    max_d = 0
    path_lengths[node] = 0
    
    for n in tree[node]:
        if n != parent:
            path_lengths[n] = path_lengths[node] + 1
            max_d = max(max_d, dfs(n, node, path_lengths, max_length))
    
    max_length[node] = max_d + 1
    return max_d + 1

# Find lexicographically smallest (A,B)
def find_smallest_AB(N, edges):
    global tree
    
    # Generate tree
    tree = generate_tree(N, edges)
    
    # Arrays to store path lengths and maximum lengths
    path_lengths = [0] * (N + 1)
    max_length = [0] * (N + 1)
    
    # Calculate path lengths and maximum lengths
    dfs(1, 0, path_lengths, max_length)
    
    # Find lexicographically smallest (A,B)
    A = max(max_length)
    counts = [0] * (A + 1)
    
    for node in range(1, N + 1):
        counts[max_length[node]] += 1
    
    B = 0
    for i in range(A, -1, -1):
        if counts[i] >= 2:
            B = i
            break
    
    return A, B

# Input
N = int(input())
edges = []
for _ in range(N - 1):
    a, b = map(int, input().split())
    edges.append((a, b))

# Find lexicographically smallest (A,B)
A, B = find_smallest_AB(N, edges)

# Output
print(A, B)