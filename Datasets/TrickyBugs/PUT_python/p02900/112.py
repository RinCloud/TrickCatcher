from fractions import gcd

A, B = map(int, input().split())

d = gcd(A, B)
d_ori = d
ans = 1
k = 2
while d > 2:
    plus = 0
    while d % k == 0:
        d //= k
        plus = 1
    ans += plus
    k += 1
    if k > d_ori**(1/2):
        ans += 1
        break
print(ans)
