from itertools import permutations

def minimize_distance(N, M, R, r, roads):
    # Create a graph to represent the towns and roads
    graph = [[float('inf')] * (N+1) for _ in range(N+1)]
    for a, b, c in roads:
        graph[a][b] = c
        graph[b][a] = c
        
    # Use Floyd-Warshall algorithm to find the shortest paths between any two towns
    for k in range(1, N+1):
        for i in range(1, N+1):
            for j in range(1, N+1):
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j])
                
    # Find the minimum distance
    min_distance = float('inf')
    for perm in permutations(r):
        distance = 0
        for i in range(len(perm)-1):
            distance += graph[perm[i]][perm[i+1]]
        min_distance = min(min_distance, distance)
        
    return min_distance

# Read input
N, M, R = map(int, input().split())
r = list(map(int, input().split()))
roads = [tuple(map(int, input().split())) for _ in range(M)]

# Compute and print the minimum distance
print(minimize_distance(N, M, R, r, roads))