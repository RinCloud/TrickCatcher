n,x,m = map(int,input().split())
ans = 0
al = set([x])
A = [x]
for i in range(n):
  x = (x**2)%m
  if x==A[0]:
    break
  ans += x
  A.append(x)
for j in range(i+1):
  ans += A[j]*((n-j-1)//(i+1-j))
  if j<(n-j-1)%(i+1-j):
    ans += A[j]
print(ans)