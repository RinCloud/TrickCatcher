from itertools import product

def solve(N, M, X, data):
    min_cost = float('inf')
    
    for p in product([0, 1], repeat=N):
        cost = 0
        skills = [0] * M
        
        for i in range(N):
            if p[i] == 1:
                c, *a = data[i]
                cost += c
                for j in range(M):
                    skills[j] += a[j]
        
        if all(s >= X for s in skills):
            min_cost = min(min_cost, cost)
    
    return min_cost if min_cost != float('inf') else -1

# Input
N, M, X = map(int, input().split())
data = []
for _ in range(N):
    data.append(list(map(int, input().split())))

# Solve and output
print(solve(N, M, X, data))