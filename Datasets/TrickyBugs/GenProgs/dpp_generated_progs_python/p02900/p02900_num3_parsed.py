"""
import math

# Read input
A, B = map(int, input().split())

# Find the greatest common divisor of A and B
gcd = math.gcd(A, B)

# Find the number of unique prime factors of the gcd
unique_prime_factors = set()

for i in range(2, int(math.sqrt(gcd)) + 1):
    while gcd % i == 0:
        unique_prime_factors.add(i)
        gcd //= i

if gcd > 1:
    unique_prime_factors.add(gcd)

# Print the maximum number of divisors
print(len(unique_prime_factors) + 1)  # Adding 1 to account for 1 as a common divisor
"""