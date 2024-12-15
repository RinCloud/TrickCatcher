from fractions import gcd

A, B = map(int, input().split())

# The problem with the original code is that it is trying to find the maximum number of divisors that can be chosen to satisfy the condition that any two chosen divisors must be coprime.
# However, the original code tries to find the maximum number of divisors of gcd(A, B) without considering the condition that any two chosen divisors must be coprime.

# To solve this problem, we need to find the prime factorization of gcd(A, B) and count the number of distinct prime factors.

def prime_factors(n):
    i = 2
    factors = []
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(i)
    if n > 1:
        factors.append(n)
    return factors

d = gcd(A, B)
factors = prime_factors(d)
distinct_factors = list(set(factors))

ans = len(distinct_factors)
print(ans)