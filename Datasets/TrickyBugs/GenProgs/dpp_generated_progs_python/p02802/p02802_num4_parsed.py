from collections import defaultdict

def takahashi_contest(n, m, records):
    ac_count = 0
    penalty_count = 0
    wa_count = defaultdict(int)
    ac_problems = set()
    
    for problem, verdict in records:
        if problem in ac_problems:
            continue
            
        if verdict == 'AC':
            ac_count += 1
            penalty_count += wa_count[problem]
            ac_problems.add(problem)
        elif verdict == 'WA':
            wa_count[problem] += 1
    
    return ac_count, penalty_count

# Read input
n, m = map(int, input().split())
records = [input().split() for _ in range(m)]

# Call the function and print the results
correct_answers, penalties = takahashi_contest(n, m, records)
print(correct_answers, penalties)
