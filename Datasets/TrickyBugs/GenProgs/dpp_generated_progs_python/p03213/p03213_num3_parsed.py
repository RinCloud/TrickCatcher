import math

N = int(input())

def count_divisors(num):
    count = 0
    for i in range(1, int(math.sqrt(num)) + 1):
        if num % i == 0:
            if num // i == i:
                count += 1
            else:
                count += 2
    return count

def count_shichi_go(N):
    factorial = math.factorial(N)
    divisors = count_divisors(factorial)
    count = 0
    for i in range(1, divisors + 1):
        if divisors % i == 0:
            count += 1
    return count

result = count_shichi_go(N)
print(result)