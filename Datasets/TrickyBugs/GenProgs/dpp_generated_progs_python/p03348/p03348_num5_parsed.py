from collections import defaultdict

def dfs(node, parent, adj_list, color, colors):
    cnt = 1
    for child in adj_list[node]:
        if child != parent:
            cnt += dfs(child, node, adj_list, color, colors)
    
    if color not in colors:
        colors[color] = []
    colors[color].append(cnt)
    
    return cnt

def solve(n, edges):
    adj_list = defaultdict(list)
    
    for u, v in edges:
        adj_list[u].append(v)
        adj_list[v].append(u)
    
    color = 1
    colors = {}
    dfs(1, -1, adj_list, color, colors)
    
    colorfulness = len(colors)
    leaves = sum(cnt % 2 == 1 for cnt in colors[1])
    
    return colorfulness, leaves

# Read input
n = int(input())
edges = [list(map(int, input().split())) for _ in range(n-1)]

# Solve the problem
colorfulness, leaves = solve(n, edges)

# Print the output
print(colorfulness, leaves)