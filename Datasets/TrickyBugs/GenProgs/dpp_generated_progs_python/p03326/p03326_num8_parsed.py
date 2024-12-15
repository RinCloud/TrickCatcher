from itertools import combinations

N, M = map(int, input().split())
cakes = [list(map(int, input().split())) for _ in range(N)]

max_sum = 0
# iterate through all possible combinations of M cakes
for chosen_cakes in combinations(cakes, M):
    sum_of_beauty = sum([abs(cake[0]) for cake in chosen_cakes])
    sum_of_tastiness = sum([abs(cake[1]) for cake in chosen_cakes])
    sum_of_popularity = sum([abs(cake[2]) for cake in chosen_cakes])
    total_sum = sum_of_beauty + sum_of_tastiness + sum_of_popularity
    max_sum = max(max_sum, total_sum)

print(max_sum)