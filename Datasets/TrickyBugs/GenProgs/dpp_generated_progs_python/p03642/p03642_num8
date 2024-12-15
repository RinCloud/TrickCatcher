def sieve_of_eratosthenes(n):
    primes = [True] * (n+1)
    primes[0] = primes[1] = False
    p = 2
    while p*p <= n:
        if primes[p]:
            for i in range(p*p, n+1, p):
                primes[i] = False
        p += 1
    return primes

def minimum_operations(N, cards):
    max_card = max(cards)
    primes = sieve_of_eratosthenes(max_card)
    operations = 0
    for card in cards:
        if not primes[card]:
            operations += 1
    return operations

# Read input
N = int(input())
cards = list(map(int, input().split()))

# Calculate minimum number of operations
min_ops = minimum_operations(N, cards)

# Print the result
print(min_ops)