from collections import Counter   
n, k = map(int, input().split())  
d = Counter()
for key in input().split():
  d[key] += 1
l = len(d)
print(sum(sorted(d.values())[:l-k]))
