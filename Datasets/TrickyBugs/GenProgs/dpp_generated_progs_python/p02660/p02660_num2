import math

def prime_factorize(n):
    factors = []
    while n % 2 == 0:
        factors.append(2)
        n = n // 2
    for i in range(3, int(math.sqrt(n)) + 1, 2):
        while n % i == 0:
            factors.append(i)
            n = n // i
    if n > 2:
        factors.append(n)
    return factors

def max_operation_count(n):
    factors = prime_factorize(n)
    counter = 0
    prev = set()
    for factor in factors:
        if factor not in prev:
            prev.add(factor)
            counter += 1
    return counter

# Read input from standard input
n = int(input().strip())

# Calculate the maximum number of operations
max_operations = max_operation_count(n)

# Print the result
print(max_operations)