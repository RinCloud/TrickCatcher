from collections import defaultdict
from heapq import heappop, heappush

def solve(N, M, AB, UV):
    graph = defaultdict(list)
    for u, v in UV:
        graph[u].append(v)
        graph[v].append(u)
    
    costs = [float('inf')] * (N+1)
    costs[1] = AB[1][0]

    pq = [(costs[1], 1)]
    while pq:
        cost, node = heappop(pq)
        
        for neighbor in graph[node]:
            new_cost = max(cost, AB[neighbor][0])
            if new_cost < costs[neighbor]:
                costs[neighbor] = new_cost
                heappush(pq, (new_cost, neighbor))
    
    answer = sum(AB[node][1] - costs[node] for node in range(1, N+1))
    return answer

N, M = map(int, input().split())
AB = [(0, 0)] + [tuple(map(int, input().split())) for _ in range(N)]
UV = [tuple(map(int, input().split())) for _ in range(M)]

print(solve(N, M, AB, UV))