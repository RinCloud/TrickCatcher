from itertools import combinations
from collections import defaultdict

N, K = map(int, input().split())

sushi = []
for _ in range(N):
    t, d = map(int, input().split())
    sushi.append((t, d))

sushi.sort(key=lambda x: -x[1])

t_dict = defaultdict(int)
total_deliciousness = 0
kind_count = 0
remove_sushi = []
for i in range(N):
    t, d = sushi[i]
    if t_dict[t] == 0:
        kind_count += 1
    else:
        remove_sushi.append(d)
    t_dict[t] += 1
    total_deliciousness += d

remove_sushi.sort(reverse=True)
remove_count = len(remove_sushi)
max_satisfaction = total_deliciousness + kind_count**2

for i in range(1, remove_count+1):
    remove_total = sum(remove_sushi[:i])
    remove_kind_count = i
    satisfaction = total_deliciousness - remove_total + kind_count**2 - remove_kind_count**2
    max_satisfaction = max(max_satisfaction, satisfaction)

print(max_satisfaction)