import math

def solve(D, G, p, c):
    min_problems = float('inf')

    for i in range(2**D):
        problems = 0
        score = 0

        for j in range(D):
            if (i >> j) & 1:
                problems += p[j]
                score += (j + 1) * 100 * p[j] + c[j]

        if score >= G:
            min_problems = min(min_problems, problems)

    return min_problems

# Read input
D, G = map(int, input().split())
p = []
c = []

for _ in range(D):
    p_i, c_i = map(int, input().split())
    p.append(p_i)
    c.append(c_i)

# Solve problem
min_problems = solve(D, G, p, c)

# Print result
print(min_problems)