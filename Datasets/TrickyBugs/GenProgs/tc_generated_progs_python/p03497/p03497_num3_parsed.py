Here is the cleaned code. I have fixed the bug and also ensured that all constraints are satisfied.

'''python
from collections import defaultdict

n, k = map(int, input().split())
d = defaultdict(int)
for key in input().split():
    d[key] += 1
    
l = len(d)
print(max(0, sum(sorted(d.values())[:l-k])))
'''