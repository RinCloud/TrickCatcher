from collections import defaultdict

N, M = map(int, input().split())

correct_answers = set()
penalties = defaultdict(int)

for _ in range(M):
    p, S = input().split()
    p = int(p)

    if S == "AC":
        correct_answers.add(p)
    else:
        if p not in correct_answers:
            penalties[p] += 1

num_correct_answers = len(correct_answers)
num_penalties = sum(penalties.values())

print(num_correct_answers, num_penalties)