import math

N, K = map(int, input().split())
A = list(map(int, input().split()))

l = 1
r = max(A)

while r-l > 1:
  m = (r+l) // 2
  count = 0
  for i in A:
    if i > m:
      count += math.ceil(i / m)-1
      
  if count > K:
    l = m
  else:
    r = m
    
print(r)
