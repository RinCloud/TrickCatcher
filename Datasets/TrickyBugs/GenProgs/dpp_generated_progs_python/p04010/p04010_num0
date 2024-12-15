from collections import defaultdict, deque

def bfs(graph, start, target):
    queue = deque([(start, 0)])
    visited = set([start])
    
    while queue:
        node, distance = queue.popleft()
        if node == target:
            return distance
        for neighbor in graph[node]:
            if neighbor not in visited:
                visited.add(neighbor)
                queue.append((neighbor, distance + 1))
    
    return float('inf')

def main():
    N, M = map(int, input().split())
    graph = defaultdict(list)
    
    for _ in range(M):
        a, b = map(int, input().split())
        graph[a].append(b)
        graph[b].append(a)
    
    black_count = sum(1 for i in range(1, N+1) if i in graph[i])
    
    if black_count == 0 or black_count == N:
        print(M)
    elif black_count == 1:
        print(-1)
    else:
        distances = [bfs(graph, i, i) for i in range(1, N+1)]
        max_distance = max(distances)
        print(max_distance // 2 + 1)

if __name__ == "__main__":
    main()