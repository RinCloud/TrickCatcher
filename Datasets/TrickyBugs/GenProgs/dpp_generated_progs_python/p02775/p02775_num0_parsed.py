"""
# The minimum number of banknotes required can be calculated by finding the highest power of 10 that is less than or equal to the given value N,
# and then adding 1 to the number of digits in that power of 10.
# For example, if N = 36, the highest power of 10 less than or equal to 36 is 10^1, and the number of digits in that is 1.
# So the minimum number of banknotes required is 1 + 1 = 2.

# Read the input N
N = int(input())

# Find the highest power of 10 less than or equal to N
power_of_10 = 1
while power_of_10 * 10 <= N:
    power_of_10 *= 10

# Find the number of digits in the power of 10
number_of_digits = len(str(power_of_10))

# Calculate the minimum number of banknotes required
minimum_banknotes = number_of_digits + 1

# Print the minimum number of banknotes required
print(minimum_banknotes)
"""