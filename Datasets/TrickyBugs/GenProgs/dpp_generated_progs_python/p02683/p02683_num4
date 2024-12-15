N, M, X = map(int, input().split())
costs = []
skills = []

for _ in range(N):
    c, *a = map(int, input().split())
    costs.append(c)
    skills.append(a)

min_cost = float('inf')

for mask in range(1 << N):
    total_cost = 0
    total_skills = [0] * M

    for i in range(N):
        if mask & (1 << i):
            total_cost += costs[i]
            for j in range(M):
                total_skills[j] += skills[i][j]

    if all(skill >= X for skill in total_skills):
        min_cost = min(min_cost, total_cost)

if min_cost == float('inf'):
    print(-1)
else:
    print(min_cost)