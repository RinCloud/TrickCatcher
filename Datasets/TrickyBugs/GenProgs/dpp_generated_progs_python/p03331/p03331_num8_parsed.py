# Read N from input
N = int(input())

# Function to calculate the sum of the digits for a number
def sum_of_digits(num):
    return sum(int(digit) for digit in str(num))

# Initial values for the minimum sum of digits and A
min_sum = float('inf')
A = 1

# Iterate over all possible values of A
while A <= N // 2:
    B = N - A
    sum_A = sum_of_digits(A)
    sum_B = sum_of_digits(B)
    min_sum = min(min_sum, sum_A + sum_B)
    A += 1

# Print the minimum possible value
print(min_sum)
