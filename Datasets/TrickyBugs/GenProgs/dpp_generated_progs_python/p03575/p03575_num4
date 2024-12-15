from collections import defaultdict

def dfs(graph, u, parent, visited, low, disc, bridges):
    visited[u] = True
    disc[u] = dfs.time
    low[u] = dfs.time
    dfs.time += 1
    
    for v in graph[u]:
        if not visited[v]:
            parent[v] = u
            dfs(graph, v, parent, visited, low, disc, bridges)
            low[u] = min(low[u], low[v])
            
            if low[v] > disc[u]:
                bridges.append((u, v))
        elif v != parent[u]:
            low[u] = min(low[u], disc[v])
    
def find_bridges(graph, N):
    visited = [False] * (N + 1)
    low = [float('inf')] * (N + 1)
    disc = [float('inf')] * (N + 1)
    parent = [-1] * (N + 1)
    bridges = []
    
    dfs.time = 0
    dfs(graph, 1, parent, visited, low, disc, bridges)
    
    return bridges

def main():
    N, M = map(int, input().split())
    graph = defaultdict(list)
    
    for _ in range(M):
        a, b = map(int, input().split())
        graph[a].append(b)
        graph[b].append(a)
    
    bridges = find_bridges(graph, N)
    print(len(bridges))

if __name__ == '__main__':
    main()