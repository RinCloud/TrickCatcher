# Program to find the minimum possible value of the sum of digits of A and B

def sum_of_digits(n):
    # Function to calculate the sum of digits of a number
    sum = 0
    while n > 0:
        sum += n % 10
        n //= 10
    return sum

def min_sum_of_digits(N):
    # Function to find the minimum possible value
    # of the sum of digits of A and B
    min_sum = float('inf')  # Initialize minimum sum with infinity
    max_a = N // 2  # Maximum possible value of A
    for a in range(1, max_a + 1):
        b = N - a  # Calculate B
        sum_a = sum_of_digits(a)  # Calculate sum of digits of A
        sum_b = sum_of_digits(b)  # Calculate sum of digits of B
        min_sum = min(min_sum, sum_a + sum_b)  # Update minimum sum
    return min_sum

# Reading input
N = int(input())

# Calculate and print minimum possible value of the sum of digits of A and B
print(min_sum_of_digits(N))