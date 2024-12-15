from collections import defaultdict

def dfs(v, parent, adj_list, favorite, d):
    count = 0
    
    if favorite[v]:
        count += 1
    
    for u in adj_list[v]:
        if u == parent:
            continue
        count += dfs(u, v, adj_list, favorite, d-1)
    
    return count

def solve(N, edges, favorite):
    adj_list = defaultdict(list)
    for a, b in edges:
        adj_list[a].append(b)
        adj_list[b].append(a)
    
    v = favorite.index('1') + 1
    d = 0
    while True:
        count = dfs(v, -1, adj_list, favorite, d)
        if count == 0:
            break
        d += 1
    
    return d+1

# Read input
N = int(input())
edges = []
for _ in range(N-1):
    a, b = map(int, input().split())
    edges.append((a, b))
favorite = input()

# Solve the problem
result = solve(N, edges, favorite)

# Print the result
print(result)