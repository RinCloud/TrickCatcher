
from bisect import bisect_left, bisect_right
n, k = map(int, input().split())
a = list(map(int, input().split()))
a.sort()
na = a[:bisect_left(a, 0)]
pa = a[bisect_right(a, 0):][::-1]
mod = 10**9+7
if k==n:
    ans = 1
    for i in a:
        ans *= i
        ans %= mod
    print(ans)
    exit(0)
if k%2==1 and len(pa)==0:
    ans = 1
    for i in a[::-1][:k]:
        ans *= i
        ans %= mod
    print(ans)
    exit(0)
if k==1:
    print(a[-1])
    exit(0)
if k%2==1:
    rem = pa[-1]
    pa = pa[:-1]
na += [0]*n
pa += [0]*n
nn = 0
pn = 0
ans = 1
for i in range(k//2):
    if i==k//2-1 and k%2==1:
        break
    if pa[pn]*pa[pn+1]>=na[nn]*na[nn+1]:
        ans *= pa[pn]*pa[pn+1]
        pn += 2
    else:
        ans *= na[nn]*na[nn+1]
        nn += 2
    ans %= mod
if k%2==1:
    ans *= max(pa[pn]*pa[pn+1]*max(pa[pn+2], rem), na[nn]*na[nn+1]*max(pa[pn], rem))
    ans %= mod
print(ans)
