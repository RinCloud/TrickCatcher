n=int(input())
a=[int(x) for x in input().split()]
c=0
for i in range(n-1):
  if a[i]!=i+1:
    c+=1
print('YES' if c<3 else 'NO')
