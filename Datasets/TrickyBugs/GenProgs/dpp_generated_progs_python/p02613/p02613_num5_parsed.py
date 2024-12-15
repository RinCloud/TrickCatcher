def count_verdicts(N, S):
    verdicts = {'AC': 0, 'WA': 0, 'TLE': 0, 'RE': 0}
    for verdict in S:
        verdicts[verdict] += 1
    
    output = ''
    for verdict, count in verdicts.items():
        output += f'{verdict} x {count}\n'
    
    return output

N = int(input())
S = []
for _ in range(N):
    S.append(input())

print(count_verdicts(N, S))