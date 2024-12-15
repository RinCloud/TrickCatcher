# Python program to solve the problem

# Function to find the minimum amount of money needed to achieve the objective
def minimum_money(N, M, X, cost, skills):
    min_cost = float('inf')
    for i in range(2**N):
        total_cost = 0
        skill_set = [0] * M
        for j in range(N):
            if i & (1 << j):
                total_cost += cost[j]
                for k in range(M):
                    skill_set[k] += skills[j][k]
        if all(skill >= X for skill in skill_set):
            min_cost = min(min_cost, total_cost)
    if min_cost == float('inf'):
        return -1
    else:
        return min_cost

# Getting input from the user
N, M, X = map(int, input().split())
cost = []
skills = []
for _ in range(N):
    c, *a = map(int, input().split())
    cost.append(c)
    skills.append(a)

# Function call to find the minimum amount of money needed to achieve the objective
result = minimum_money(N, M, X, cost, skills)

# Printing the minimum amount of money needed to achieve the objective
print(result)