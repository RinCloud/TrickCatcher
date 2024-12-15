# Program to find the sum of integers between 1 and N (inclusive),
# whose sum of digits written in base 10 is between A and B (inclusive)

def digit_sum(num):
    # Function to calculate the sum of digits of a number
    total = 0
    while num > 0:
        total += num % 10
        num //= 10
    return total

def sum_of_integers(n, a, b):
    # Function to find the sum of integers whose sum of digits
    # is between A and B (inclusive)
    sum = 0
    for i in range(1, n + 1):
        if a <= digit_sum(i) <= b:
            sum += i
    return sum

# Reading the input values
n, a, b = map(int, input().split())

# Finding the sum of integers between 1 and N
result = sum_of_integers(n, a, b)

# Printing the result
print(result)