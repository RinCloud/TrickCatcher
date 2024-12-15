# Read the input value of N
N = int(input())

# Initialize the maximum sum of digits as 0
max_sum = 0

# Iterate from 1 to N
for i in range(1, N+1):
    # Calculate the sum of digits of the current number
    digit_sum = sum(map(int, str(i)))
    
    # If the sum of digits is greater than the current maximum, update the maximum sum
    if digit_sum > max_sum:
        max_sum = digit_sum
    
# Print the maximum possible sum of digits
print(max_sum)