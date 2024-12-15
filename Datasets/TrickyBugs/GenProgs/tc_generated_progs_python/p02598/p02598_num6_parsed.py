N, K = map(int, input().split())
A = list(map(int, input().split()))

l = 0
r = max(A)

while r-l > 1:
  m = (r+l) // 2
  count = 0
  for i in A:
    count += (i-1) // (m-1)
      
  if count > K:
    l = m
  else:
    r = m
    
print(r)