def find_graph(N, M, Q, clues):
    graph = [[0] * N for _ in range(N)]
    for i in range(M):
        u, v = clues[i][0], clues[i][1]
        graph[u][v] = 1
        graph[v][u] = 1
    
    for i in range(Q):
        u, v, c = clues[M+i]
        if c == 0:
            if not dfs(u, v, graph):
                return "No"
        else:
            if not has_multiple_paths(u, v, graph):
                return "No"
    
    return "Yes"

def dfs(u, v, graph):
    visited = [False] * len(graph)
    stack = [u]
    
    while stack:
        node = stack.pop()
        visited[node] = True
        
        if node == v:
            return True
        
        for neighbor in range(len(graph[node])):
            if graph[node][neighbor] and not visited[neighbor]:
                stack.append(neighbor)
    
    return False

def has_multiple_paths(u, v, graph):
    return graph[u][v] > 1

N, M, Q = map(int, input().split())
clues = [list(map(int, input().split())) for _ in range(M+Q)]

print(find_graph(N, M, Q, clues))