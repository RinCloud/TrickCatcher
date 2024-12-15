# Program to determine whether a number N is a multiple of 9

# Function to find the sum of digits of a number
def get_sum_of_digits(n):
    sum = 0
    while n > 0:
        sum += n % 10
        n //= 10
    return sum

# Read the input N
N = int(input())

# Find the sum of digits of N
sum_of_digits = get_sum_of_digits(N)

# Check if the sum is a multiple of 9
if sum_of_digits % 9 == 0:
    print("Yes")
else:
    print("No")