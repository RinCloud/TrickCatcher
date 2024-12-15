import math

def factorize(n):
    factors = {}
    i = 2
    while i * i <= n:
        while n % i == 0:
            n //= i
            factors[i] = factors.get(i, 0) + 1
        i += 1
    if n > 1:
        factors[n] = factors.get(n, 0) + 1
    return factors

def count_shichi_go(n):
    factors = {}
    for i in range(2, n + 1):
        temp = factorize(i)
        for factor in temp:
            factors[factor] = factors.get(factor, 0) + temp[factor]
    count = 1
    for factor in factors:
        count *= factors[factor] + 1
    return count

n = int(input())
result = count_shichi_go(n)
print(result)