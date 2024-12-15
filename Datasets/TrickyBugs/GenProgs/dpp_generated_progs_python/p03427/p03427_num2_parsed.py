N = int(input())

# Function to calculate the sum of digits in a number
def sum_of_digits(num):
    sum = 0
    while num > 0:
        sum += num % 10
        num //= 10
    return sum

# Initialize the maximum sum to 0
max_sum = 0

# Loop through numbers from 1 to N
for i in range(1, N+1):
    # Calculate the sum of digits for the current number
    cur_sum = sum_of_digits(i)
    
    # Update the maximum sum if the current sum is larger
    if cur_sum > max_sum:
        max_sum = cur_sum

# Print the maximum sum
print(max_sum)