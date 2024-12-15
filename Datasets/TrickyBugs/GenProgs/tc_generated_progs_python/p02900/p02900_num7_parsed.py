from fractions import gcd
import math

A, B = map(int, input().split())

d = gcd(A, B)
d_ori = d
ans = 1
k = 2
while d > 1:
    plus = 0
    while d % k == 0:
        d //= k
        plus = 1
    ans += plus
    k += 1
    if k > math.isqrt(d_ori):
        ans += 1
        break
print(ans)