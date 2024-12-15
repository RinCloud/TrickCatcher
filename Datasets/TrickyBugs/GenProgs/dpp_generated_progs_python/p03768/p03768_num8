from collections import deque

def update_colors(graph, colors, v, d, c):
    visited = [False] * (len(graph) + 1)
    queue = deque([(v, 0)])
    
    while queue:
        curr_v, curr_d = queue.popleft()
        
        if curr_d > d:
            continue
            
        if colors[curr_v] == 0:
            colors[curr_v] = c
            
        visited[curr_v] = True
        
        for adj_v in graph[curr_v]:
            if not visited[adj_v]:
                queue.append((adj_v, curr_d + 1))

def main():
    N, M = map(int, input().split())
    graph = [[] for _ in range(N + 1)]
    
    for _ in range(M):
        a, b = map(int, input().split())
        graph[a].append(b)
        graph[b].append(a)
        
    Q = int(input())
    colors = [0] * (N + 1)
    
    for _ in range(Q):
        v, d, c = map(int, input().split())
        update_colors(graph, colors, v, d, c)
        
    for i in range(1, N + 1):
        print(colors[i])

if __name__ == "__main__":
    main()