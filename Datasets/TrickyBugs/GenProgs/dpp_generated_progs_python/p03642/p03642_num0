import math

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

def min_operations(N, cards):
    primes = []
    for i in range(3, int(math.sqrt(cards[-1])) + 1):
        if is_prime(i):
            primes.append(i)

    operations = 0
    for p in primes:
        if all((card - 1) % p != 0 for card in cards):
            operations += 1

    return operations

# Read input
N = int(input())
cards = list(map(int, input().split()))

# Compute and print the minimum number of operations required
print(min_operations(N, cards))