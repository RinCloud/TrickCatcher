def shortest_distance_pairs(N, X, Y):
    G = [[0 for _ in range(N)] for _ in range(N)]
    
    for i in range(N-1):
        G[i][i+1] = 1
        G[i+1][i] = 1
    
    G[X-1][Y-1] = 1
    G[Y-1][X-1] = 1
    
    ans = []
    
    for k in range(1, N):
        count = 0
        
        for i in range(N):
            for j in range(i+1, N):
                
                if G[i][j] != 0:
                    dist = [float('inf') for _ in range(N)]
                    dist[i] = 0
                    
                    queue = [i]
                    
                    while queue:
                        v = queue.pop(0)
                        
                        for neighbor in range(N):
                            if G[v][neighbor] != 0 and dist[neighbor] == float('inf'):
                                dist[neighbor] = dist[v] + 1
                                queue.append(neighbor)
                    
                    if dist[j] == k:
                        count += 1
        
        ans.append(count)
    
    return ans

N, X, Y = map(int, input().split())
answer = shortest_distance_pairs(N, X, Y)
for ans in answer:
    print(ans)