import sys

# Read input
N = int(input())
edges = [list(map(int, input().split())) for _ in range(N-1)]

# Initialize adjacency list
adj_list = [[] for _ in range(N+1)]
for a, b in edges:
    adj_list[a].append(b)
    adj_list[b].append(a)

# Initialize levels and leaf counts
levels = [0] * (N+1)
leaves = [0] * (N+1)

# DFS to calculate levels and leaf counts
def dfs(node, parent):
    level = 0
    leaf_count = 0
    for child in adj_list[node]:
        if child == parent:
            continue
        dfs(child, node)
        level = max(level, levels[child])
        leaf_count += leaves[child]
    levels[node] = level + 1
    if len(adj_list[node]) == 1:
        leaf_count = 1
    leaves[node] = leaf_count

# Build initial tree
dfs(1, -1)

# Add vertices to minimize colorfulness
for i in range(2, N+1):
    max_child = max(adj_list[i], key=lambda x: levels[x])
    adj_list[max_child].append(i)
    adj_list[i].append(max_child)

# Update levels and leaf counts
levels = [0] * (N+1)
leaves = [0] * (N+1)
dfs(1, -1)

# Calculate colorfulness and count leaves
colorfulness = max(levels)
leaf_count = 0
for i in range(1, N+1):
    if len(adj_list[i]) == 1:
        leaf_count += 1

# Print output
print(colorfulness, leaf_count)
