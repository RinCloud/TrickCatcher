from typing import List, Tuple

def find_bridges(N: int, M: int, edges: List[Tuple[int, int]]) -> int:
    graph = [[] for _ in range(N+1)]
    for a, b in edges:
        graph[a].append(b)
        graph[b].append(a)
    
    visited = [False] * (N+1)
    low = [float('inf')] * (N+1)
    bridges = 0
    
    def dfs(node: int, parent: int, time: int) -> None:
        nonlocal bridges
        nonlocal visited
        nonlocal low
        
        visited[node] = True
        low[node] = time
        
        for adj in graph[node]:
            if adj == parent:
                continue
            
            if not visited[adj]:
                dfs(adj, node, time+1)
                low[node] = min(low[node], low[adj])
                
                if low[adj] > time:
                    bridges += 1
                    
            else:
                low[node] = min(low[node], low[adj])
                
    dfs(1, -1, 0)
    return bridges


# Reading input
N, M = map(int, input().split())
edges = [tuple(map(int, input().split())) for _ in range(M)]

# Finding bridges
bridges = find_bridges(N, M, edges)

# Printing output
print(bridges)