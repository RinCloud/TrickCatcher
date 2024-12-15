import itertools

N = int(input())
V = list(map(int, input().split()))
C = list(map(int, input().split()))

max_value = 0

for i in range(1, N+1):
    combinations = itertools.combinations(range(N), i) # generate all possible combinations
    
    for combination in combinations:
        total_value = 0
        total_cost = 0
        
        for index in combination:
            total_value += V[index]
            total_cost += C[index]
        
        max_value = max(max_value, total_value - total_cost)

print(max_value)