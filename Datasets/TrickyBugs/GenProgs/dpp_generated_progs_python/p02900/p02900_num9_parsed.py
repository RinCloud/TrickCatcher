# Program to find the maximum number of divisors that can be chosen
# to satisfy the condition that any two chosen divisors must be coprime.

# Function to find the number of divisors of a number
def divisors_count(num):
    count = 0
    for i in range(1, int(num**0.5) + 1):
        if num % i == 0:
            count += 1
            if i != num // i:
                count += 1
    return count


# Function to find gcd (greatest common divisor) of two numbers
def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

# Input
A, B = map(int, input().split())

# Find the gcd of A and B
gcd_value = gcd(A, B)

# If gcd is 1, it means A and B are coprime,
# so we can choose only 1 common divisor which is 1 itself.
if gcd_value == 1:
    print(1)
else:
    # Count the number of divisors of the gcd
    divisors = divisors_count(gcd_value)
    print(divisors)