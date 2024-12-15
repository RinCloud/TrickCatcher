# The problem can be solved using a depth-first search (DFS) algorithm on the given tree structure.
# We'll start the DFS algorithm from node 1 and keep track of the distance of each node from node 1.
# This distance will give us the minimum number of steps required to reach each node from node 1.
# By comparing the distances of the endpoints of each edge, we can determine which player will win.
# If the distance from node 1 to node N is greater than or equal to N/2, then Fennec will win. Otherwise, Snuke will win.

from collections import deque

def dfs(tree, start):
    n = len(tree)
    visited = [False] * (n + 1)
    distance = [0] * (n + 1)
    
    visited[start] = True
    stack = deque([start])

    while stack:
        node = stack.pop()
        
        for neighbor in tree[node]:
            if not visited[neighbor]:
                visited[neighbor] = True
                distance[neighbor] = distance[node] + 1
                stack.append(neighbor)
    
    return distance

def determine_winner(N, edges):
    tree = [[] for _ in range(N + 1)]
    
    for a, b in edges:
        tree[a].append(b)
        tree[b].append(a)
    
    distances = dfs(tree, 1)
    
    if distances[N] <= N // 2:
        return "Snuke"
    else:
        return "Fennec"

# Read input
N = int(input())
edges = []
for _ in range(N - 1):
    a, b = map(int, input().split())
    edges.append((a, b))

# Determine winner
winner = determine_winner(N, edges)

# Print result
print(winner)