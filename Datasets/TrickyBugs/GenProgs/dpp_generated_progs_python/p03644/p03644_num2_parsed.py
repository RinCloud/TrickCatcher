# Read the integer N from input
N = int(input())

# Initialize the maximum count and the number
max_count = 0
number = 0

# Iterate through all the numbers between 1 and N (inclusive)
for i in range(1, N+1):
    # Initialize the count and the current number
    count = 0
    curr_number = i
    # Divide the current number by 2 until it can no longer be divided
    while curr_number % 2 == 0:
        curr_number = curr_number // 2
        count += 1
    # Check if the count is greater than the previous maximum count
    if count > max_count:
        max_count = count
        number = i

# Print the number that can be divided by 2 for the most number of times
print(number)