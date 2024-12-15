from collections import defaultdict

def dfs(node, parent, adj_list, uninity):
    children = []
    for child in adj_list[node]:
        if child != parent:
            dfs(child, node, adj_list, uninity)
            children.append(uninity[child])
    
    if len(children) == 0:
        uninity[node] = 0
    else:
        max_child_uninity = max(children)
        uninity[node] = max_child_uninity + 1

def find_minimum_uninity(n, edges):
    adj_list = defaultdict(list)
    uninity = [0] * (n+1)

    for a, b in edges:
        adj_list[a].append(b)
        adj_list[b].append(a)

    dfs(1, -1, adj_list, uninity)
    
    return uninity[1]

# Read input
n = int(input())
edges = []
for _ in range(n-1):
    a, b = map(int, input().split())
    edges.append((a, b))

# Find minimum uninity
minimum_uninity = find_minimum_uninity(n, edges)

# Print output
print(minimum_uninity)