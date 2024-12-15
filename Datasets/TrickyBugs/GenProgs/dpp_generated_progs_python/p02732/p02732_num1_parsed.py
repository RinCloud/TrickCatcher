from collections import Counter

def solve(N, balls):
    count = Counter(balls)
    answers = []
    for ball in balls:
        num_ways = count[ball] - 1
        answers.append(num_ways)
    return answers

# Read input
N = int(input())
balls = list(map(int, input().split()))

# Solve the problem
answers = solve(N, balls)

# Print the answers
for ans in answers:
    print(ans)
