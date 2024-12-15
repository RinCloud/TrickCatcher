from math import sqrt

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

def minimum_operations(N, X):
    primes = [i for i in range(2, N + 3) if is_prime(i)]  # Generate prime numbers up to N + 2
    operations = 0
    cards = [False] * (X[-1] + 1)  # Assume all cards are face down initially
    for x in X:
        cards[x] = True  # Flip the face-up cards
    for prime in primes:
        if prime < len(cards):
            for i in range(prime, len(cards), prime):
                cards[i] = not cards[i]  # Flip the cards at positions divisible by the current prime
        if all(card == False for card in cards):  # Check if all cards are face down
            return operations
        operations += 1
    return operations

# Read input
N = int(input())
X = list(map(int, input().split()))

# Calculate and print the minimum number of operations required
print(minimum_operations(N, X))