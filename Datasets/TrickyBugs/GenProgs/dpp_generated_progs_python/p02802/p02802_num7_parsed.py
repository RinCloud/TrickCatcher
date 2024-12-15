# Reading the input
N, M = map(int, input().split())
submissions = []

# Reading the submissions
for _ in range(M):
    p, s = input().split()
    submissions.append((int(p), s))

# Initializing variables
correct_answers = 0
penalties = 0

# Counting correct answers and penalties
ac_problems = set()
for p, s in submissions:
    if p in ac_problems:
        continue
    if s == 'AC':
        ac_problems.add(p)
        correct_answers += 1
        penalties += submissions.count((p, 'WA'))

# Printing the results
print(correct_answers, penalties)