import math

def is_prime(n):
    if n <= 1:
        return False
    if n <= 3:
        return True
    if n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True

def prime_factors(n):
    factors = []
    while n % 2 == 0:
        factors.append(2)
        n //= 2
    for i in range(3, int(math.sqrt(n)) + 1, 2):
        while n % i == 0:
            factors.append(i)
            n //= i
    if n > 2:
        factors.append(n)
    return factors

def max_operation_applied(n):
    if n == 1:
        return 0
    factors = prime_factors(n)
    prime_count = {}
    for factor in factors:
        if is_prime(factor):
            prime_count[factor] = prime_count.get(factor, 0) + 1
    return max(prime_count.values())

# Read input
n = int(input())

# Calculate maximum number of times the operation can be applied
max_applied = max_operation_applied(n)

# Print the result
print(max_applied)