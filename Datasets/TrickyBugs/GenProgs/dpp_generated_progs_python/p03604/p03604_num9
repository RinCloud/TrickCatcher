from collections import defaultdict

MOD = 1000000007

def dfs(graph, node, visited):
    visited[node] = True
    count = 1
    for neighbor in graph[node]:
        if not visited[neighbor]:
            count += dfs(graph, neighbor, visited)
    return count

def solve(N, balls):
    coordinates = defaultdict(list)
    for i, (x, y) in enumerate(balls):
        coordinates[x].append(i)
        coordinates[N+y].append(i)
    
    graph = defaultdict(list)
    for i in range(N):
        a, b = coordinates[i+1]
        c, d = coordinates[N+i+1]
        graph[a].append(c)
        graph[d].append(b)
    
    visited = [False] * (2 * N)
    ans = 1
    for i in range(2 * N):
        if not visited[i]:
            count = dfs(graph, i, visited)
            ans *= count
            ans %= MOD
    return ans

N = int(input())
balls = [tuple(map(int, input().split())) for _ in range(2 * N)]
print(solve(N, balls))