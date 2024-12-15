import math

def count_Shichi_Go_numbers(N):
    count = 0
    factorial = math.factorial(N)

    # Check all numbers from 1 to N! for Shichi-Go numbers
    for i in range(1, factorial + 1):
        divisors = get_divisors_count(i)
        if divisors == 75:
            count += 1

    return count

def get_divisors_count(num):
    count = 0
    for i in range(1, int(num**0.5) + 1):
        if num % i == 0:
            if num // i == i:
                count += 1
            else:
                count += 2
    return count

# Read input
N = int(input())

# Calculate the number of Shichi-Go numbers
result = count_Shichi_Go_numbers(N)

# Print the result
print(result)