import itertools

D, G = map(int, input().split())
problems = []
for _ in range(D):
    p, c = map(int, input().split())
    problems.append((p, c))

min_problems = float('inf')
for pattern in itertools.product([0, 1], repeat=D):
    solved_problems = sum(pattern)
    solved_score = 0
    for i, (p, c) in enumerate(problems):
        if pattern[i] > 0:
            solved_problems += p
            solved_score += (i + 1) * 100 * p + c
    if solved_score >= G:
        min_problems = min(min_problems, solved_problems)

print(min_problems)