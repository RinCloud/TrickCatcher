def choose_cakes(N, M, cakes):
    from itertools import combinations

    max_value = 0

    for i in range(1, M+1):
        for c in combinations(cakes, i):
            beauty = sum([abs(cake[0]) for cake in c])
            tastiness = sum([abs(cake[1]) for cake in c])
            popularity = sum([abs(cake[2]) for cake in c])
            value = beauty + tastiness + popularity
            if value > max_value:
                max_value = value

    return max_value


N, M = map(int, input().split())
cakes = []
for _ in range(N):
    x, y, z = map(int, input().split())
    cakes.append((x, y, z))

print(choose_cakes(N, M, cakes))