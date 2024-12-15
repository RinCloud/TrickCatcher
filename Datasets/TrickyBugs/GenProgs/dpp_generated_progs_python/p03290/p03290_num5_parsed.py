# Solution

def solve(D, G, problems):
    min_problems = float('inf')
    for bitmask in range(1 << D):
        score = 0
        num_problems = 0
        max_bonus_idx = -1
        for i in range(D):
            if bitmask & (1 << i):
                score += problems[i][0] * 100 * (i + 1) + problems[i][1]
                num_problems += problems[i][0]
            else:
                max_bonus_idx = i
        
        if score < G:
            remaining = G - score
            bonus = problems[max_bonus_idx][0] * 100 * (max_bonus_idx + 1)
            if remaining % bonus == 0:
                num_problems += remaining // bonus
            else:
                num_problems += remaining // bonus + 1
        
        min_problems = min(min_problems, num_problems)
    
    return min_problems


# parsing input
D, G = map(int, input().split())
problems = []
for _ in range(D):
    p, c = map(int, input().split())
    problems.append((p, c))

# calling solve function
result = solve(D, G, problems)

# printing result
print(result)