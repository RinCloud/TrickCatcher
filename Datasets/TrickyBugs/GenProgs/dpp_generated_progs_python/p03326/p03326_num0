from itertools import combinations

N, M = map(int, input().split())
cakes = [list(map(int, input().split())) for _ in range(N)]

max_value = 0

for i in range(1, M+1):
    for comb in combinations(cakes, i):
        beauty = [abs(cake[0]) for cake in comb]
        tastiness = [abs(cake[1]) for cake in comb]
        popularity = [abs(cake[2]) for cake in comb]
        value = sum(beauty) + sum(tastiness) + sum(popularity)
        max_value = max(max_value, value)

print(max_value)