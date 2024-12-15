N, M = map(int, input().split())

correct_answers = 0
penalties = 0
problems = {}
for _ in range(M):
    p, s = input().split()
    if s == 'AC':
        if p not in problems:
            problems[p] = 0
            correct_answers += 1
            penalties += problems[p]
    else:
        if p not in problems:
            problems[p] = 0
        problems[p] += 1
        
print(correct_answers, penalties)