import itertools

N, M, K = map(int, input().split())

MOD = 10**9 + 7

def compute_cost(x1, y1, x2, y2):
    return abs(x1 - x2) + abs(y1 - y2)

def calculate_arrangement_cost(arrangement):
    cost = 0
    for i in range(len(arrangement)):
        for j in range(i+1, len(arrangement)):
            cost += compute_cost(arrangement[i][0], arrangement[i][1], arrangement[j][0], arrangement[j][1])
    return cost % MOD

total_cost = 0

for arrangement in itertools.combinations([(i, j) for i in range(N) for j in range(M)], K):
    total_cost += calculate_arrangement_cost(arrangement)

print(total_cost % MOD)