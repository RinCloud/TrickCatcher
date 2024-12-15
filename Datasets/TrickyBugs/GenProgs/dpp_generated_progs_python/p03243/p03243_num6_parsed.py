# Given the value of N, we need to find the smallest 3-digit integer (ABC) where all digits are the same.

# Read the input value for N
N = int(input())

# Find the smallest 3-digit integer where all digits are the same
# We know that this integer has to be greater than or equal to N
# Initialize a variable x with the value N
x = N

# Keep incrementing x until all digits are the same
while x % 10 != x // 100:
    x += 1

# Print the result
print(x)