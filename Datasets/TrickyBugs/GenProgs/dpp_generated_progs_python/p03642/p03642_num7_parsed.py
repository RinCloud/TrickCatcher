import math

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

def find_minimum_operations(N, cards):
    operations = 0
    for i in range(2, cards[-1] + 1):
        if is_prime(i):
            for j in range(i - 1, len(cards)):
                if cards[j] <= i and cards[j] - j % 2 == 0:
                    operations += 1
    return operations

# Read input
N = int(input())
cards = list(map(int, input().split()))

# Find minimum number of operations
minimum_operations = find_minimum_operations(N, cards)

# Print minimum number of operations
print(minimum_operations)