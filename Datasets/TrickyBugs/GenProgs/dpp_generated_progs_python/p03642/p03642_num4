import math

def is_prime(n):
    if n <= 1:
        return False
    elif n <= 3:
        return True
    elif n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True

def find_primes(n):
    primes = []
    for i in range(2, n+1):
        if is_prime(i):
            primes.append(i)
    return primes

def min_operations(N, cards):
    primes = find_primes(max(cards) + 1)
    operations = 0
    for p in primes:
        for i in range(N - p + 1):
            if all(not cards[i+j] for j in range(p)):
                operations += 1
                for j in range(p):
                    cards[i+j] = 1
    return operations

# Read input from STDIN
N = int(input())
cards = list(map(int, input().split()))

# Find the minimum number of operations required
result = min_operations(N, cards)

# Print the result
print(result)