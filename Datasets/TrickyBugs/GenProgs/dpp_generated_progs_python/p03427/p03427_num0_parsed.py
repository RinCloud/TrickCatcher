import sys

def max_digit_sum(N):
    # Convert N to a string
    N_str = str(N)
    
    # Calculate the sum of the digits of N
    digit_sum = sum([int(digit) for digit in N_str])
    
    # Return the digit sum
    return digit_sum

# Read the input from standard input
N = int(sys.stdin.readline().strip())

# Calculate the maximum possible sum of the digits
result = max_digit_sum(N)

# Print the result
print(result)