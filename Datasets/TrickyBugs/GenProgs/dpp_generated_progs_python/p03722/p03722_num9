from collections import defaultdict

def solve(N, M, edges):
    # Initializing the adjacency list
    graph = defaultdict(list)
    for a, b, c in edges:
        graph[a].append((b, c))
    
    # Initializing the distance array
    distance = [float('-inf')] * (N + 1)
    distance[1] = 0
    
    # Runs Bellman-Ford algorithm
    for _ in range(2 * N):
        for u in range(1, N + 1):
            for v, c in graph[u]:
                distance[v] = max(distance[v], distance[u] + c)
    
    # Check for negative cycle
    for _ in range(N):
        for u in range(1, N + 1):
            for v, c in graph[u]:
                if distance[v] < distance[u] + c:
                    distance[v] = float('inf')
    
    # Returns the maximum score at the end of the game
    if distance[N] == float('inf'):
        return 'inf'
    else:
        return distance[N]


# Reading input from standard input
N, M = map(int, input().split())
edges = []
for _ in range(M):
    a, b, c = map(int, input().split())
    edges.append((a, b, c))

# Calls the solve function and prints the result
result = solve(N, M, edges)
print(result)