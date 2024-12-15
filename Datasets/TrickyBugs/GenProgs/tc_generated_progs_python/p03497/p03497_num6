Repaired code:

from collections import defaultdict

n, k = map(int, input().split())
d = defaultdict(int)
for key in input().split():
  d[key] += 1

l = len(d)
if l <= k:
  print(0)
else:
  print(sum(sorted(d.values())[:l-k]))