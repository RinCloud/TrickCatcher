def takahashi_contest(N, M, submissions):
    correct_answers = 0
    penalties = 0
    ac_problems = set()
    wa_counts = {}
    
    for i in range(M):
        problem, verdict = submissions[i]
        
        if verdict == 'AC':
            if problem not in ac_problems:
                correct_answers += 1
                ac_problems.add(problem)
                if problem in wa_counts:
                    penalties += wa_counts[problem]
        else:
            if problem not in wa_counts:
                wa_counts[problem] = 0
            wa_counts[problem] += 1
    
    return correct_answers, penalties

# Read input
N, M = map(int, input().split())
submissions = []
for _ in range(M):
    problem, verdict = input().split()
    submissions.append((int(problem), verdict))

# Get result
correct_answers, penalties = takahashi_contest(N, M, submissions)

# Print output
print(correct_answers, penalties)