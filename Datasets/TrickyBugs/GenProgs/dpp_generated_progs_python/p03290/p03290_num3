# INPUT
D, G = map(int, input().split())

problems = []
for _ in range(D):
    p, c = map(int, input().split())
    problems.append((p, c))

# Set the initial result to a large number
result = float('inf')

# Loop through all possible combinations of solving problems
for mask in range(1<<D):
    score = 0
    solved = 0
    rest_max = -1

    # Calculate the score and the number of solved problems for each combination
    for i in range(D):
        if mask>>i & 1:
            score += problems[i][0]*100*(i+1) + problems[i][1]
            solved += problems[i][0]
        else:
            rest_max = i

    # If the current score is already greater than or equal to G, update the result with the number of solved problems
    if score >= G:
        result = min(result, solved)
    else:
        # Calculate the minimum number of additional problems needed
        solve_rest = (G-score+100*(rest_max+1)-1) // (100*(rest_max+1))
        if solve_rest >= problems[rest_max][0]:
            continue
        result = min(result, solved + solve_rest)

# OUTPUT
print(result)