import math

# Function to check if a number is prime
def is_prime(number):
    if number < 2:
        return False
    for i in range(2, int(math.sqrt(number)) + 1):
        if number % i == 0:
            return False
    return True

# Function to flip cards
def flip_cards(cards, p):
    for i in range(len(cards)):
        if cards[i] % p == 0:
            cards[i] = not cards[i]
    return cards

# Read input
N = int(input())
cards = list(map(int, input().split()))

# Initialize counter
operations = 0

# Iterate over all primes starting from 3
for p in range(3, max(cards) + 1):
    if is_prime(p):
        # Flip cards if any card is divisible by p
        if any(card % p == 0 for card in cards):
            cards = flip_cards(cards, p)
            operations += 1

# Count the remaining face-up cards
remaining = cards.count(True)

# Print the minimum number of operations
print(operations + remaining)