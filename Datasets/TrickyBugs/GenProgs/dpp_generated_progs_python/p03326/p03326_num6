from itertools import combinations

N, M = map(int, input().split())
cakes = []
for _ in range(N):
    x, y, z = map(int, input().split())
    cakes.append((x, y, z))

max_total = 0
for combination in combinations(cakes, M):
    total = sum([abs(cake[0]) for cake in combination]) + \
            sum([abs(cake[1]) for cake in combination]) + \
            sum([abs(cake[2]) for cake in combination])
    max_total = max(max_total, total)

print(max_total)