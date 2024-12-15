N, K = map(int, input().split())
A = list(map(int, input().split()))

l = 0
r = 10 ** 9

while r-l > 1:
  m = (r+l) // 2
  count = 0
  for i in A:
    if i > m:
      count += (i + m - 1) // m  # bug fix: count the number of cuts needed, not the number of logs
    
  if count > K:
    l = m
  else:
    r = m
    
print(r)