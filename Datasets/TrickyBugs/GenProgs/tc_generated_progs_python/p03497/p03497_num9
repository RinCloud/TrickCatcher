**Repaired code**:

from collections import defaultdict

n, k = map(int, input().split())
d = defaultdict(int)
for key in input().split():
  d[key] += 1

l = len(d)
print(sum(sorted(d.values())[:l - k]))