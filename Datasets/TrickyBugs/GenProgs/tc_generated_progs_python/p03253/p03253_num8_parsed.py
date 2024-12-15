n, m = map(int, input().split())
mod = 1000000007

def cmb(n, k):
    ret = 1
    # calculate n!/(k!*(n-k)!) in an optimized manner
    for i in range(k):
        ret *=  n - i
        ret //= i + 1
    return ret % mod

primes = [2]
# check primes up to square root of m
for p in range(3, int(m ** 0.5) + 1):
    if all(p % q for q in primes):
        primes.append(p)

ret = 1
for p in primes:
    q = 0
    # count how many times p divides m
    while m % p == 0:
        m //= p
        q += 1
    if q > 0:
        # calculate the number of ways to distribute the prime factors among the sequence elements
        ret = (ret * cmb(n + q - 1, q)) % mod
if m > 1:
    # if m is still greater than 1, it means m is a prime number
    # so it must be counted separately in the number of ways
    ret = (ret * cmb(n, 1)) % mod

print(ret)