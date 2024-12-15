from itertools import permutations

N, M, R = map(int, input().split())
towns = list(map(int, input().split()))

distances = [[float('inf')] * N for _ in range(N)]
for _ in range(M):
    A, B, C = map(int, input().split())
    distances[A - 1][B - 1] = C
    distances[B - 1][A - 1] = C

for k in range(N):
    for i in range(N):
        for j in range(N):
            distances[i][j] = min(distances[i][j], distances[i][k] + distances[k][j])

perms = permutations(towns)
min_distance = float('inf')
for perm in perms:
    distance = 0
    for i in range(len(perm) - 1):
        distance += distances[perm[i] - 1][perm[i + 1] - 1]
    min_distance = min(min_distance, distance)

print(min_distance)