import math

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

def count_operations(n):
    primes = []
    operations = 0
    while n > 1:
        found_prime = False
        for i in range(2, int(math.sqrt(n)) + 1):
            if is_prime(i) and n % i == 0:
                p = i
                e = 1
                while n % (p ** (e + 1)) == 0:
                    e += 1
                z = p ** e
                if z not in primes:
                    primes.append(z)
                    found_prime = True
                    break
        if found_prime:
            n //= z
            operations += 1
        else:
            break
    return operations

# Read input N
N = int(input())

# Calculate the maximum number of operations
max_operations = count_operations(N)

# Print the maximum number of operations
print(max_operations)