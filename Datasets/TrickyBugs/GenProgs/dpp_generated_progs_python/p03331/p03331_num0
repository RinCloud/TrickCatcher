# Program to find the minimum possible value of the sum of the digits of A plus the sum of the digits of B

def sum_digits(n):
    return sum(int(digit) for digit in str(n))

def min_sum_digits(n):
    half = n // 2
    for i in range(half, 1, -1):
        if sum_digits(i) + sum_digits(n - i) == min_sum:
            return i

# Read the input integer N
N = int(input())

# Find the minimum possible value of the sum of the digits of A plus the sum of the digits of B
min_sum = sum_digits(N)

# Find the integers A and B such that A + B = N and the sum of their digits is minimum
result = min_sum_digits(N)

# Print the minimum possible value of the sum of the digits of A plus the sum of the digits of B
print(min_sum)