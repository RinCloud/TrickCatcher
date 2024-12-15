from itertools import permutations

# Read input
N, M, R = map(int, input().split())
r = list(map(int, input().split()))
roads = [list(map(int, input().split())) for _ in range(M)]

# Initialize distance matrix
dist = [[float('inf')] * N for _ in range(N)]
for i in range(N):
    dist[i][i] = 0

# Construct distance matrix
for a, b, c in roads:
    dist[a-1][b-1] = min(dist[a-1][b-1], c)
    dist[b-1][a-1] = min(dist[b-1][a-1], c)

# Floyd-Warshall algorithm
for k in range(N):
    for i in range(N):
        for j in range(N):
            dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j])

# Calculate minimum distance
min_dist = float('inf')
for perm in permutations(r):
    total_dist = 0
    for i in range(len(perm)-1):
        total_dist += dist[perm[i]-1][perm[i+1]-1]
    min_dist = min(min_dist, total_dist)

# Print result
print(min_dist)