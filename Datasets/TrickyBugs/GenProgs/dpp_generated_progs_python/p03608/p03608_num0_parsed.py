from itertools import permutations

N, M, R = map(int, input().split())
r = list(map(int, input().split()))

dist = [[float('inf')]*(N+1) for _ in range(N+1)]
for i in range(M):
    A, B, C = map(int, input().split())
    dist[A][B] = C
    dist[B][A] = C

for k in range(1, N+1):
    for i in range(1, N+1):
        for j in range(1, N+1):
            dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j])

answer = float('inf')
for perm in permutations(r):
    total_dist = 0
    for i in range(len(perm)-1):
        total_dist += dist[perm[i]][perm[i+1]]
    answer = min(answer, total_dist)

print(answer)