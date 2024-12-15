from collections import defaultdict

# Function to dfs the tree and calculate the number of black vertices
def dfs(graph, vertex, parent, likes, dist):
    black_count = 0
    
    # If the current vertex is liked by Snuke, increase black count by 1
    if likes[vertex]:
        black_count += 1
    
    for child in graph[vertex]:
        # Skip the parent node
        if child == parent:
            continue
        
        # If current vertex is liked, increase the distance from the parent by 1
        if likes[vertex]:
            child_dist = dist + 1
        else:
            child_dist = 0
        
        # Recursively call dfs on the child node
        child_black_count = dfs(graph, child, vertex, likes, child_dist)
        
        # If the child node has at least one black vertex, increase black count by the number of black vertices in the child node
        if child_black_count > 0:
            black_count += child_black_count
    
    return black_count

# Read the input
N = int(input())
edges = []
for _ in range(N-1):
    a, b = map(int, input().split())
    edges.append((a, b))
likes = list(map(int, input()))

# Create an adjacency list representation of the tree
tree = defaultdict(list)
for a, b in edges:
    tree[a].append(b)
    tree[b].append(a)

# Get the number of possible combinations of colors of the vertices after the operation
combinations = dfs(tree, 1, 0, likes, 0)

# Print the result
print(combinations)