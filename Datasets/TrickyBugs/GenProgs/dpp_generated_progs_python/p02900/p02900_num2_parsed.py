import math

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

def count_divisors(a, b):
    common_divisors = set()
    for i in range(1, math.isqrt(a) + 1):
        if a % i == 0 and b % i == 0:
            common_divisors.add(i)
            common_divisors.add(a // i)
    divisors = []
    for divisor in common_divisors:
        is_coprime = True
        for other_divisor in divisors:
            if gcd(divisor, other_divisor) != 1:
                is_coprime = False
                break
        if is_coprime:
            divisors.append(divisor)
    return len(divisors)

# Read input
a, b = map(int, input().split())

# Calculate result and print it
result = count_divisors(a, b)
print(result)