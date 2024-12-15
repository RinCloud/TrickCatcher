**Repaired code**:

from math import gcd
n,k=map(int,input().split())
a=list(map(int,input().split()))
c=max(a)
p=a[0]
for i in range(1,n):
    p=gcd(p,a[i])
print("POSSIBLE" if k%p==0 and k<=c else "IMPOSSIBLE")