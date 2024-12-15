from collections import defaultdict
from itertools import permutations

MOD = 10**9 + 7

def dfs(cur, color):
    global K
    global adj_list
    global visited
    
    visited[cur] = True

    total_ways = 1
    for neighbor in adj_list[cur]:
        if not visited[neighbor]:
            total_ways *= (K - (color[cur] == color[neighbor]))
            total_ways %= MOD

    color[cur] = 'x'  # mark the node as painted

    for neighbor in adj_list[cur]:
        if not visited[neighbor]:
            total_ways *= dfs(neighbor, color)
            total_ways %= MOD

    return total_ways

def solve(N, M, K, edges):
    global adj_list
    global visited
    
    adj_list = defaultdict(list)
    for (a, b) in edges:
        adj_list[a].append(b)
        adj_list[b].append(a)

    visited = [False]*(N+1)
    color = ['']* (N+1)

    total_ways = 1
    for node in range(1, N+1):
        if not visited[node]:
            total_ways *= (K - 1) * dfs(node, color)
            total_ways %= MOD

    return total_ways

N, M, K = map(int, input().split())
edges = [tuple(map(int, input().split())) for _ in range(M)]
print(solve(N, M, K, edges))