from collections import deque

def dfs(adj_list, start):
    visited = [False] * (len(adj_list) + 1)
    visited[start] = True
    
    black_count = 0
    white_count = 0
    
    queue = deque([start])
    while queue:
        curr = queue.popleft()
        if curr == 1:
            black_count += 1
        elif curr == len(adj_list):
            white_count += 1
        
        for neighbor in adj_list[curr]:
            if not visited[neighbor]:
                visited[neighbor] = True
                queue.append(neighbor)
    
    return black_count, white_count

def solve(N, edges):
    adj_list = [[] for _ in range(N+1)]
    for a, b in edges:
        adj_list[a].append(b)
        adj_list[b].append(a)
    
    black_count, white_count = dfs(adj_list, 1)
    
    if black_count > white_count:
        return "Fennec"
    else:
        return "Snuke"

# Read input
N = int(input())
edges = []
for _ in range(N-1):
    a, b = map(int, input().split())
    edges.append((a, b))

# Solve and print output
print(solve(N, edges))