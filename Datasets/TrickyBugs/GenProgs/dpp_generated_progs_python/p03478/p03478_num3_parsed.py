import sys

# Read the input values
input_values = sys.stdin.readline().split()
N = int(input_values[0])
A = int(input_values[1])
B = int(input_values[2])

# Initialize the sum variable
total_sum = 0

# Iterate through the integers from 1 to N (inclusive)
for i in range(1, N+1):
    # Calculate the sum of digits of the current number
    digit_sum = sum(map(int, str(i)))
    
    # Check if the sum of digits is between A and B (inclusive)
    if A <= digit_sum <= B:
        # Add the current number to the total sum
        total_sum += i

# Print the total sum
print(total_sum)