N = int(input())
verdicts = []
for i in range(N):
    verdicts.append(input())

count_ac = verdicts.count('AC')
count_wa = verdicts.count('WA')
count_tle = verdicts.count('TLE')
count_re = verdicts.count('RE')

print(f'AC x {count_ac}')
print(f'WA x {count_wa}')
print(f'TLE x {count_tle}')
print(f'RE x {count_re}')