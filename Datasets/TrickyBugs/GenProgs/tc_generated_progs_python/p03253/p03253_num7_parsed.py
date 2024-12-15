n, m = map(int, input().split())
mod = 1000000007

def cmb(n, k):
    ret = 1
    for i in range(k):
        ret *=  n - i
        ret //= i + 1
    return ret % mod

def sieve():
    primes = []
    lp = [0] * (m + 1)
    for p in range(2, m + 1):
        if lp[p] == 0:
            primes.append(p)
            lp[p] = p
        for i in range(len(primes)):
            if primes[i] <= lp[p] and primes[i] * p <= m:
                lp[primes[i] * p] = primes[i]
            else:
                break
    return primes

primes = sieve()

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