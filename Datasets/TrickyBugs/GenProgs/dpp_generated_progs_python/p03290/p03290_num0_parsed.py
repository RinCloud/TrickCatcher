import itertools

def min_problems(D, G, problems):
    min_count = float('inf')
    for i in range(D+1):
        for combination in itertools.combinations(problems, i):
            score = 0
            count = 0
            for p, c in combination:
                count += p
                score += 100 * (count * p) + c
                if score >= G:
                    min_count = min(min_count, count)
                    break
    return min_count

D, G = map(int, input().split())
problems = []
for _ in range(D):
    p, c = map(int, input().split())
    problems.append((p, c))

print(min_problems(D, G, problems))