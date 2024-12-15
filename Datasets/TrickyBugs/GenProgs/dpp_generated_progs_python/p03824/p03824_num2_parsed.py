from collections import defaultdict

def dfs(node, parent, adj_list):
    uni = 0
    for child in adj_list[node]:
        if child != parent:
            uni = max(uni, dfs(child, node, adj_list))
    return uni + 1

def tree_of_uninity(n, edges):
    adj_list = defaultdict(list)
    for u, v in edges:
        adj_list[u].append(v)
        adj_list[v].append(u)
    
    return dfs(1, -1, adj_list) - 1

# Read input
n = int(input())
edges = []
for _ in range(n-1):
    a, b = map(int, input().split())
    edges.append((a, b))

# Compute and print the minimum k
print(tree_of_uninity(n, edges))