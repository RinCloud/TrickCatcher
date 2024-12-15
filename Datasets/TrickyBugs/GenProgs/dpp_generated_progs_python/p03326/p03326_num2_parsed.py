import itertools

def maximum_cake_value(N, M, cakes):
    max_value = 0
    for combination in itertools.combinations(cakes, M):
        beauty = sum([abs(cake[0]) for cake in combination])
        tastiness = sum([abs(cake[1]) for cake in combination])
        popularity = sum([abs(cake[2]) for cake in combination])
        total_value = beauty + tastiness + popularity
        max_value = max(max_value, total_value)
    return max_value

N, M = map(int, input().split())
cakes = [list(map(int, input().split())) for _ in range(N)]

result = maximum_cake_value(N, M, cakes)
print(result)