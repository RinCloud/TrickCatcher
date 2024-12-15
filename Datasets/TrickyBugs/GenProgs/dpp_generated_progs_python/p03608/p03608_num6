from itertools import permutations

def find_min_distance(N, M, R, towns, roads):
    INF = float('inf')
    dist = [[INF] * N for _ in range(N)]

    for i in range(N):
        dist[i][i] = 0

    for a, b, c in roads:
        a -= 1
        b -= 1
        dist[a][b] = c
        dist[b][a] = c

    for k in range(N):
        for i in range(N):
            for j in range(N):
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j])
    
    min_distance = INF
    for perm in permutations(towns, R):
        distance = 0
        for i in range(R - 1):
            distance += dist[perm[i] - 1][perm[i + 1] - 1]
        min_distance = min(min_distance, distance)

    return min_distance

N, M, R = map(int, input().split())
towns = list(map(int, input().split()))
roads = [list(map(int, input().split())) for _ in range(M)]

min_distance = find_min_distance(N, M, R, towns, roads)
print(min_distance)