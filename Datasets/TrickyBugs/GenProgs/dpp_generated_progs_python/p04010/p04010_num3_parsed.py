from collections import deque

def bfs(graph, start):
    queue = deque([(start, 0)])
    visited = set([start])
    
    while queue:
        node, level = queue.popleft()
        for neighbor in graph[node]:
            if neighbor not in visited:
                visited.add(neighbor)
                queue.append((neighbor, level + 1))
    
    return visited

def main():
    N, M = map(int, input().split())
    graph = [[] for _ in range(N + 1)]
    
    for _ in range(M):
        a, b = map(int, input().split())
        graph[a].append(b)
        graph[b].append(a)
    
    visited = bfs(graph, 1)
    
    if len(visited) < N:
        print(-1)
    else:
        print(len(visited) - 1)

if __name__ == "__main__":
    main()