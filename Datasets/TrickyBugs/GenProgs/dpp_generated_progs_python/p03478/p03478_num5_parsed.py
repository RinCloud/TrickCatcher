import sys

def digit_sum(num):
    """Function to calculate the sum of digits of a number"""
    s = 0
    while num:
        s += num % 10
        num //= 10
    return s

def calculate_sum(N, A, B):
    """Function to calculate the sum of integers with sum of digits in range [A, B]"""
    total_sum = 0
    for i in range(1, N+1):
        if A <= digit_sum(i) <= B:
            total_sum += i
    return total_sum

# Reading input from Standard Input
input_line = sys.stdin.readline().strip()
N, A, B = map(int, input_line.split())

# Calculating the sum
result = calculate_sum(N, A, B)

# Printing the result
print(result)