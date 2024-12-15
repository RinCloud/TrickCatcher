from itertools import permutations

def min_distance(N, M, R, r, roads):
    INF = float("inf")
    distance = [[INF] * (N+1) for _ in range(N+1)]

    for i in range(1, N+1):
        distance[i][i] = 0

    for a, b, c in roads:
        distance[a][b] = c
        distance[b][a] = c

    for k in range(1, N+1):
        for i in range(1, N+1):
            for j in range(1, N+1):
                distance[i][j] = min(distance[i][j], distance[i][k]+distance[k][j])

    ans = INF
    for perm in permutations(r):
        d = 0
        for i in range(R-1):
            d += distance[perm[i]][perm[i+1]]
        ans = min(ans, d)
    
    return ans


N, M, R = map(int, input().split())
r = list(map(int, input().split()))
roads = [list(map(int, input().split())) for _ in range(M)]

print(min_distance(N, M, R, r, roads))