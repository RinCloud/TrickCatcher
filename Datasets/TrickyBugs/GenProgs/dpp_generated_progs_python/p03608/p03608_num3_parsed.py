from itertools import permutations

def min_distance(N, M, R, towns, roads):
    # Create adjacency matrix
    dist = [[float('inf')] * N for _ in range(N)]
    for a, b, c in roads:
        dist[a-1][b-1] = c
        dist[b-1][a-1] = c

    # Find shortest distance between any pair of towns using Floyd-Warshall algorithm
    for k in range(N):
        for i in range(N):
            for j in range(N):
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j])
    
    # Find the minimum distance traveled by road
    min_dist = float('inf')
    for p in permutations(towns):
        dist_sum = 0
        for i in range(R-1):
            dist_sum += dist[p[i]-1][p[i+1]-1]
        min_dist = min(min_dist, dist_sum)
    
    return min_dist

# Read input
N, M, R = map(int, input().split())
towns = list(map(int, input().split()))
roads = [list(map(int, input().split())) for _ in range(M)]

# Call the function and print the result
print(min_distance(N, M, R, towns, roads))