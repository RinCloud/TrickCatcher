import heapq

def dijkstra(n, s, adj_list):
    dist = [float('inf')] * (n + 1)
    pq = [(0, s)]
    dist[s] = 0
    
    while pq:
        d, u = heapq.heappop(pq)
        
        if d > dist[u]:
            continue
        
        for v, cost in adj_list[u]:
            if dist[u] + cost < dist[v]:
                dist[v] = dist[u] + cost
                heapq.heappush(pq, (dist[v], v))
    
    return dist

def main():
    N, M, S = map(int, input().split())
    adj_list = [[] for _ in range(N + 1)]
    
    for _ in range(M):
        U, V, A, B = map(int, input().split())
        adj_list[U].append((V, A, B))
        adj_list[V].append((U, A, B))
    
    exchange = []
    
    for _ in range(N):
        C, D = map(int, input().split())
        exchange.append((C, D))
    
    dist = dijkstra(N, 1, adj_list)
    
    for i in range(2, N + 1):
        min_time = float('inf')
        
        for j in range(i - 1, 0, -1):
            time = dist[j]
            s = S - (i - j) * exchange[j - 1][0]
            
            if s >= 0:
                time += (i - j) * exchange[j - 1][1]
            
            min_time = min(min_time, time)
        
        print(min_time)

if __name__ == '__main__':
    main()