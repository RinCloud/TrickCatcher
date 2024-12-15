import itertools

N, M, X = map(int, input().split())

C = []
A = []
for _ in range(N):
    c, *a = map(int, input().split())
    C.append(c)
    A.append(a)

min_cost = float('inf')

for r in range(1, N+1):
    for comb in itertools.combinations(range(N), r):
        combined_costs = [0] * M
        for i in comb:
            for j in range(M):
                combined_costs[j] += A[i][j]
        if all(cost >= X for cost in combined_costs):
            min_cost = min(min_cost, sum(C[i] for i in comb))

if min_cost == float('inf'):
    print(-1)
else:
    print(min_cost)
