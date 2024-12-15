import math

def count_divisors(N):
    mod = 10**9 + 7
    divisors = 1
    for i in range(1, N+1):
        divisors *= (i + 1)
        divisors %= mod
    
    return divisors

N = int(input())
result = count_divisors(N)
print(result)