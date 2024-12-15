n, m = map(int, input().split())
mod = 1000000007

def cmb(n, k):
    ret = 1
    for i in range(k):
        ret *=  n - i
        ret //= i + 1
    return ret % mod

def sieve_of_eratosthenes(n):
    prime = [True for _ in range(n+1)]
    p = 2
    while p * p <= n:
        if prime[p]:
            for i in range(p * p, n+1, p):
                prime[i] = False
        p += 1
    return [p for p in range(2, n+1) if prime[p]]

primes = sieve_of_eratosthenes(int(m**0.5)+1)

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