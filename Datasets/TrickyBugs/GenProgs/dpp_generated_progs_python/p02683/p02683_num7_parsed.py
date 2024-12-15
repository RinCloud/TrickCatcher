'''
#parse input
n, m, x = map(int, input().split())
costs = []
skills = []
for _ in range(n):
    c, *a = map(int, input().split())
    costs.append(c)
    skills.append(a)

#generate all possible combinations of books
combinations = []
for i in range(1, n+1):
    for comb in itertools.combinations(range(n), i):
        combinations.append(comb)

result = float('inf')
# iterate over all combinations
for comb in combinations:
    # initialize variables
    total_cost = 0
    total_skills = [0] * m
    
    # calculate total cost and skill levels for current combination
    for i in comb:
        total_cost += costs[i]
        total_skills = [x+y for x,y in zip(total_skills, skills[i])]
    
    # check if objective is achievable
    if all(skill >= x for skill in total_skills):
        result = min(result, total_cost)
    
# output result
if result == float('inf'):
    print(-1)
else:
    print(result)
'''