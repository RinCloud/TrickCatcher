n, m = map(int, input().split())
mod = 1000000007

def cmb(n, k):
    ret = 1
    for i in range(k):
        ret *=  n - i
        ret //= i + 1
    return ret % mod

primes = []

x = m
i = 2
while i*i <= x:
    if x % i == 0:
        primes.append(i)
        while x % i == 0:
            x //= i
    i += 1
if x > 1:
    primes.append(x)

ret = 1
for p in primes:
    q = 0
    while m % p == 0:
        m //= p
        q += 1
    if q > 0:
        ret = (ret * cmb(n + q - 1, q)) % mod
if m > 1:
    ret = (ret * cmb(n, 1)) % mod

print(ret)