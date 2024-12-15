# Getting input values
N, M = map(int, input().split())

# Initializing variables
correct_answers = 0
penalties = 0
problems = [0] * N
wa_count = [0] * N

# Processing submissions
for _ in range(M):
    p, S = input().split()
    p = int(p)
    
    if S == "AC" and problems[p-1] == 0:
        correct_answers += 1
        penalties += wa_count[p-1]
        problems[p-1] = 1
    elif S == "WA" and problems[p-1] == 0:
        wa_count[p-1] += 1

# Printing results
print(correct_answers, penalties)