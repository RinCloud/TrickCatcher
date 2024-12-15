from collections import defaultdict

N, M = map(int, input().split())

correct = 0
penalties = 0
submission_count = defaultdict(int)
accepted_count = defaultdict(int)

for _ in range(M):
    p, s = input().split()
    p = int(p)
    
    if s == 'AC':
        if accepted_count[p] == 0:
            correct += 1
            penalties += submission_count[p]
        
        accepted_count[p] = 1
    
    elif s == 'WA':
        submission_count[p] += 1

print(correct, penalties)