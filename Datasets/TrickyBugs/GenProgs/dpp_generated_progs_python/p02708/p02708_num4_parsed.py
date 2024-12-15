import sys

N, K = map(int, sys.stdin.readline().split())

mod = 10**9+7

# Factorial function
def factorial(n):
    fact = 1
    for i in range(1, n+1):
        fact = (fact * i) % mod
    return fact

# Combiantion function
def combination(n, k):
    numerator = factorial(n)
    denominator = (factorial(k) * factorial(n-k)) % mod
    inverse_denominator = pow(denominator, mod-2, mod)
    return (numerator * inverse_denominator) % mod

result = 0

for i in range(K, N+2):
    result = (result + combination(N+1, i)) % mod

print(result)