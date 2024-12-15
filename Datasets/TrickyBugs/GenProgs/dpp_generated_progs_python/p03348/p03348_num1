from collections import defaultdict

def dfs(v, parent, adj_list):
    children = 0
    for u in adj_list[v]:
        if u != parent:
            children += dfs(u, v, adj_list)
    return max(1, children)

def solve(N, edges):
    adj_list = defaultdict(list)
    for a, b in edges:
        adj_list[a].append(b)
        adj_list[b].append(a)
    
    colorfulness = float('inf')
    min_leaves = float('inf')
    
    for root in range(1, N+1):
        num_leaves = dfs(root, -1, adj_list)
        
        if num_leaves < min_leaves:
            min_leaves = num_leaves
            colorfulness = 2
        elif num_leaves == min_leaves:
            colorfulness += 1
    
    return colorfulness, min_leaves

N = int(input())
edges = []
for _ in range(N-1):
    a, b = map(int, input().split())
    edges.append((a, b))

colorfulness, min_leaves = solve(N, edges)
print(colorfulness, min_leaves)