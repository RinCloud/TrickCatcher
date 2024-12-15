from itertools import combinations

n, m, x = map(int, input().split())

books = []

for _ in range(n):
    c, *a = map(int, input().split())
    books.append((c, a))

cost = -1
for r in range(1, n + 1):
    for combs in combinations(books, r):
        total_a = [0] * m
        total_c = 0
        for c, a in combs:
            total_c += c
            total_a = [sum(x) for x in zip(total_a, a)]
        if all(x >= x for x in total_a):
            cost = total_c if cost == -1 else min(cost, total_c)

print(cost)
