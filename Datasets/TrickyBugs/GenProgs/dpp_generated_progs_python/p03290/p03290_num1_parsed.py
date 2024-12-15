# Generating code for the given problem

def minimum_problems_to_solve(D, G, p, c):
    min_problems = float('inf')
    
    for mask in range(1 << D):
        score = 0
        num_problems = 0
        bonus = 0

        for i in range(D):
            if (mask >> i) & 1:
                score += p[i] * 100 * (i + 1) + c[i]
                num_problems += p[i]
                bonus += p[i]

        if score >= G:
            min_problems = min(min_problems, num_problems)

        else:
            remaining = G - score
            if remaining % (100 * (D + 1)) == 0:
                needed_problems = remaining // (100 * (D + 1))
            else:
                needed_problems = remaining // (100 * (D + 1)) + 1

            if needed_problems <= bonus:
                min_problems = min(min_problems, num_problems + needed_problems)

    return min_problems

# reading input
D, G = map(int, input().split())
p = []
c = []

for _ in range(D):
    p_i, c_i = map(int, input().split())
    p.append(p_i)
    c.append(c_i)

# calling the function and printing the result
print(minimum_problems_to_solve(D, G, p, c))