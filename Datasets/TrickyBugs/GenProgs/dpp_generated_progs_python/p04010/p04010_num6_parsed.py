from collections import defaultdict

def bfs(graph, start):
    queue = [start]
    visited = set()
    color_count = {0: 0, 1: 0}
    color = defaultdict(int)

    while queue:
        vertex = queue.pop(0)
        visited.add(vertex)
        
        for neighbor in graph[vertex]:
            if neighbor not in visited:
                queue.append(neighbor)
                color[neighbor] = 1 - color[vertex]
                color_count[color[neighbor]] += 1

    return color_count[0], color_count[1]

def solve(N, M, edges):
    graph = defaultdict(list)
    
    for a, b in edges:
        graph[a].append(b)
        graph[b].append(a)
    
    white_count, black_count = bfs(graph, 1)
    
    if white_count == 0:
        return black_count
    elif black_count == 0:
        return white_count
    else:
        return -1

N, M = map(int, input().split())
edges = [tuple(map(int, input().split())) for _ in range(M)]

print(solve(N, M, edges))