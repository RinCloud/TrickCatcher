from collections import Counter

n = int(input())
l = list(map(int, input().split()))
mod = 10**9+7

if n % 2 == 0:
  counts = Counter(l)
  if len(set(l)) == n//2 and counts.most_common()[0][1] == 2:
    print(2**(n//2)%mod)
  else:
    print(0)
else:
  counts = Counter(l)
  if l.count(0) == 1 and counts.most_common()[0][1] == 2:
    print(2**((n-1)//2)%mod)
  else:
    print(0)
