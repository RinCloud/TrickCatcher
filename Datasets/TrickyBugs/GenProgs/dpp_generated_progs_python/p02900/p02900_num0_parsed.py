from math import gcd

# Function to calculate the number of divisors
def num_of_divisors(n):
    divisors = 0
    for i in range(1, int(n**0.5) + 1):
        if n % i == 0:
            if i * i == n:
                divisors += 1
            else:
                divisors += 2
    return divisors

# Read input values
A, B = map(int, input().split())

# Find the common divisors of A and B
common_divisors = set()
for i in range(1, gcd(A, B) + 1):
    if A % i == 0 and B % i == 0:
        common_divisors.add(i)

# Check if any two chosen divisors are coprime
max_divisors = 1
for divisor in common_divisors:
    if all(gcd(divisor, chosen_divisor) == 1 for chosen_divisor in common_divisors if chosen_divisor != divisor):
        max_divisors = max(max_divisors, num_of_divisors(divisor))

# Print the maximum number of divisors
print(max_divisors)