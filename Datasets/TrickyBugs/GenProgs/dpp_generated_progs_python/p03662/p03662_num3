from collections import deque

def bfs(graph, start):
    visited = [False] * (len(graph) + 1)
    visited[start] = True
    queue = deque([start])
    
    while queue:
        node = queue.popleft()
        
        for neighbor in graph[node]:
            if not visited[neighbor]:
                visited[neighbor] = True
                queue.append(neighbor)
                
    return visited

def main():
    N = int(input())
    graph = {i: [] for i in range(1, N+1)}
    
    for _ in range(N-1):
        u, v = map(int, input().split())
        graph[u].append(v)
        graph[v].append(u)
        
    black_visited = bfs(graph, 1)
    white_visited = bfs(graph, N)
    
    fennec_count = sum(black_visited[i] and not white_visited[i] for i in range(1, N+1))
    snuke_count = N - fennec_count
    
    if fennec_count > snuke_count:
        print("Fennec")
    else:
        print("Snuke")

if __name__ == "__main__":
    main()