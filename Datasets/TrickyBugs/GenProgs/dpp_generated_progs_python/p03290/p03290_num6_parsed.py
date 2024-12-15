from itertools import combinations

D, G = map(int, input().split())
problems = []
for _ in range(D):
    p, c = map(int, input().split())
    problems.append((p, c))

min_problems = float('inf')

for i in range(D + 1):
    for c in combinations(problems, i):
        solved = sum(p * 100 * i + c for i, c in c)
        num_problems = sum(p for p, _ in c)
        if solved >= G:
            min_problems = min(min_problems, num_problems)

print(min_problems)