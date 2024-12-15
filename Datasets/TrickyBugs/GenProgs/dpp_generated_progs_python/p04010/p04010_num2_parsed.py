from collections import defaultdict

def bfs(graph, start, end):
    queue = [(start, 0)]
    visited = set()
    
    while queue:
        node, dist = queue.pop(0)
        visited.add(node)
        
        if node == end:
            return dist
        
        for neighbor in graph[node]:
            if neighbor not in visited:
                queue.append((neighbor, dist+1))
    
    return -1

def count_operations(n, m, edges):
    graph = defaultdict(list)
    
    for a, b in edges:
        graph[a].append(b)
        graph[b].append(a)
    
    white_count = 0
    black_count = 0
    
    for i in range(1, n+1):
        if i in graph:
            neighbors = graph[i]
            white_neighbors = sum(1 for neighbor in neighbors if neighbor > i)
            
            if white_neighbors % 2 == 0:
                white_count += 1
            else:
                black_count += 1
    
    if white_count < black_count or bfs(graph, 1, n) == -1:
        return -1
    
    return bfs(graph, 1, n) * 2