# Taking input values for D (total number of problem categories) and G (target score)
D, G = map(int, input().split())

# Initializing lists to store the number of problems and bonuses for each category
problems = []
bonuses = []

# Taking input values for p (number of problems) and c (bonus score) for each category
for _ in range(D):
    p, c = map(int, input().split())
    problems.append(p)
    bonuses.append(c)

# Initializing the minimum number of problems to a large value
min_problems = float('inf')

# Looping through all possible combinations of solving problems
for i in range(2**D):
    current_problems = 0
    current_score = 0
    for j in range(D):
        # If bit at j-th position is set in i, solve all problems in that category
        if (i >> j) & 1:
            current_problems += problems[j]
            current_score += problems[j] * 100 * (j+1) + bonuses[j]

    # If the current score is greater than or equal to the target score, update the minimum number of problems
    if current_score >= G:
        min_problems = min(min_problems, current_problems)

# Printing the minimum number of problems needed to reach the target score
print(min_problems)