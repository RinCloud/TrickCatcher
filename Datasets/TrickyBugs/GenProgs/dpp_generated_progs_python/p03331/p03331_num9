# Read the input
N = int(input())

# Function to calculate the sum of digits of a number
def sum_of_digits(number):
    return sum([int(digit) for digit in str(number)])

# Initialize the minimum sum to a large value
min_sum = float('inf')

# Iterate through all possible values of A from 1 to N-1
for A in range(1, N):
    # Calculate B by subtracting A from N
    B = N - A
    
    # Calculate the sum of digits of A and B
    sum_A = sum_of_digits(A)
    sum_B = sum_of_digits(B)
    
    # Update the minimum sum if current sum is smaller
    min_sum = min(min_sum, sum_A + sum_B)

# Print the minimum sum of digits
print(min_sum)