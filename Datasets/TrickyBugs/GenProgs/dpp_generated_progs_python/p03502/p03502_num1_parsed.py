# program to determine if a number is a Harshad number

# function to calculate the sum of digits of a number
def sum_of_digits(n):
    return sum(int(digit) for digit in str(n))

# function to check if a number is a Harshad number
def is_harshad_number(n):
    return n % sum_of_digits(n) == 0

# get the input number
N = int(input())

# check if N is a Harshad number
if is_harshad_number(N):
    print("Yes")
else:
    print("No")