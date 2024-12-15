from collections import defaultdict

def compute_uninity(n, edges):
    # Create adjacency list
    adj_list = defaultdict(list)
    for a, b in edges:
        adj_list[a].append(b)
        adj_list[b].append(a)
    
    # Function to compute the uninity of a tree recursively
    def compute(node, parent):
        max_uninity = 0
        for child in adj_list[node]:
            if child != parent:
                uninity = compute(child, node)
                max_uninity = max(max_uninity, uninity)
        return max_uninity + 1
    
    # Compute the uninity of the tree
    uninity = compute(1, -1)
    return uninity

# Read input
n = int(input())
edges = [list(map(int, input().split())) for _ in range(n-1)]

# Compute and print the minimum k
min_k = compute_uninity(n, edges)
print(min_k)