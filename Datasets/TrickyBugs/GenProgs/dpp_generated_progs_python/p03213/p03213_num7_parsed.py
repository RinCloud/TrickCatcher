import math

def count_shichi_go_numbers(n):
    factors = [0] * (n + 1)
    
    # Calculate the prime factors of N!
    for i in range(2, n + 1):
        while n % i == 0:
            factors[i] += 1
            n //= i

    count = 0

    # Calculate the number of Shichi-Go numbers among the divisors of N!
    for factor_count in factors:
        if factor_count >= 74:
            count += 1

    return count

# Get the input
n = int(input())

# Count the Shichi-Go numbers
shichi_go_count = count_shichi_go_numbers(n)

# Print the result
print(shichi_go_count)