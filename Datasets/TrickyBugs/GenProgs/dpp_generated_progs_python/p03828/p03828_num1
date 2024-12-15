import math

# Read the input
N = int(input())

# Calculate N!
factorial = math.factorial(N)

# Count the number of divisors
divisor_count = 0
for i in range(1, factorial+1):
    if factorial % i == 0:
        divisor_count += 1

# Print the result modulo 10^9+7
modulo = int(1e9) + 7
result = divisor_count % modulo
print(result)