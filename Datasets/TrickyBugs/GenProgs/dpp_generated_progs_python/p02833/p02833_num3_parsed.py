# Program:

def count_trailing_zeros(n):
    count = 0

    while n % 10 == 0 and n > 0:
        count += 1
        n = n // 10

    return count

def count_zeros_in_factorial(n):
    if n < 2:
        return 0

    result = 1
    for i in range(2, n + 1):
        result *= i

    return count_trailing_zeros(result)

# Get the input value
N = int(input())

# Count the zeros in the factorial of N
zeros = count_zeros_in_factorial(N)

# Print the result
print(zeros)