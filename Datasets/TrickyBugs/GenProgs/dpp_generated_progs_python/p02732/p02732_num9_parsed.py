from collections import Counter

def solve(N, balls):
    counter = Counter(balls)
    answers = []
    for k in range(N):
        pairs = (N - 1) - counter[balls[k]]
        answers.append(pairs)
    return answers

N = int(input())
balls = list(map(int, input().split()))

answers = solve(N, balls)
for answer in answers:
    print(answer)
