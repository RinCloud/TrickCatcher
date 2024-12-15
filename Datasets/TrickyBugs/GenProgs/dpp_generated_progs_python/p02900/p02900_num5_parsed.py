"""
# Function to find the greatest common divisor (GCD) of two numbers
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

# Function to count the number of divisors of a number
def count_divisors(n):
    count = 0
    for i in range(1, int(n**0.5) + 1):
        if n % i == 0:
            if n / i == i:
                count += 1
            else:
                count += 2
    return count

# Read the input integers
A, B = map(int, input().split())

# Find the greatest common divisor of A and B
g = gcd(A, B)

# Count the number of divisors of g
divisors = count_divisors(g)

# Print the maximum number of divisors that can be chosen
print(divisors)
"""