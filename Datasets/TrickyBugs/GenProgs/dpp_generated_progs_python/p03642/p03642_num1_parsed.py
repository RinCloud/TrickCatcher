import math

# Function to check if a number is prime
def is_prime(n):
    if n <= 1:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    for i in range(3, int(math.sqrt(n)) + 1, 2):
        if n % i == 0:
            return False
    return True

# Function to find the minimum number of operations required to achieve the objective
def find_minimum_operations(N, cards):
    operations = 0
    for i in range(N-1, -1, -1):
        if is_prime(cards[i]):
            operations += 1
            j = cards[i] - 1
            while is_prime(j) or j in cards:
                j -= 1
            cards.append(j)
    return operations

# Read input
N = int(input())
cards = list(map(int, input().split()))

# Find minimum number of operations
minimum_operations = find_minimum_operations(N, cards)

# Print output
print(minimum_operations)
