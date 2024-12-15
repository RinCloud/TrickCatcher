from collections import defaultdict
from collections import deque

def bfs(graph, start_node, colors, distance, color):
    queue = deque([(start_node, 0)]) 
    visited = set([start_node])
    
    while queue:
        node, dist = queue.popleft()
        if dist > distance:
            break
            
        colors[node] = color
        
        for nei in graph[node]:
            if nei not in visited:
                queue.append((nei, dist+1))
                visited.add(nei)
    

def main():
    N, M = map(int, input().split())
    
    graph = defaultdict(list)
    
    for _ in range(M):
        a, b = map(int, input().split())
        graph[a].append(b)
        graph[b].append(a)
        
    Q = int(input())
    
    vertices = [0] * (N+1)
    colors = [0] * (N+1)
    
    for _ in range(Q):
        v, d, c = map(int, input().split())
        bfs(graph, v, colors, d, c)
        
    for i in range(1, N+1):
        print(colors[i])
    

if __name__ == '__main__':
    main()