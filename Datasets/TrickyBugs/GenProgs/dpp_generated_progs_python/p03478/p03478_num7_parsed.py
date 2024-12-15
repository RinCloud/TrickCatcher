import sys

# Read the input from standard input
input_line = sys.stdin.readline().strip()
N, A, B = map(int, input_line.split())

# Function to calculate the sum of the digits of a number in base 10
def sum_of_digits(num):
    sum_digits = 0
    while num > 0:
        sum_digits += num % 10
        num //= 10
    return sum_digits

# Calculate the sum of the integers between 1 and N (inclusive)
result = 0
for i in range(1, N + 1):
    digit_sum = sum_of_digits(i)
    if A <= digit_sum <= B:
        result += i

# Print the result
print(result)