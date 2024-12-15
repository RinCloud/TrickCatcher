# Program to find the number between 1 and N (inclusive) that can be divided by 2 for the most number of times

# Read the input integer N
N = int(input())

# Initialize variables to store the maximum count and the corresponding number
max_count = 0
max_number = 0

# Iterate through the numbers from 1 to N (inclusive)
for number in range(1, N + 1):
    count = 0
    while number % 2 == 0:
        number = number // 2
        count += 1
    if count > max_count:
        max_count = count
        max_number = number

# Print the number that can be divided by 2 for the most number of times
print(max_number)