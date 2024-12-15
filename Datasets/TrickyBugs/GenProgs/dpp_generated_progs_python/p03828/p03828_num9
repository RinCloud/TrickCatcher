import math

N = int(input())

def count_positive_divisors(n):
    mod = 10**9 + 7
    divisors = 0
    for i in range(1, int(math.sqrt(n))+1):
        if n % i == 0:
            divisors += 1
            if n // i != i:
                divisors += 1
    return divisors % mod

factorial = math.factorial(N)
result = count_positive_divisors(factorial)
print(result)