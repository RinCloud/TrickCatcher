from itertools import combinations

N, M = map(int, input().split())
cakes = []
for _ in range(N):
    beauty, tastiness, popularity = map(int, input().split())
    cakes.append((beauty, tastiness, popularity))

max_score = 0
for m in range(1, M + 1):
    for combination in combinations(cakes, m):
        total_beauty = sum(c[0] for c in combination)
        total_tastiness = sum(c[1] for c in combination)
        total_popularity = sum(c[2] for c in combination)
        score = abs(total_beauty) + abs(total_tastiness) + abs(total_popularity)
        max_score = max(max_score, score)

print(max_score)