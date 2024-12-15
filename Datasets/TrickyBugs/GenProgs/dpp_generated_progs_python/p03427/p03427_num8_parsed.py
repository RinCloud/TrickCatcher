import sys

def max_digit_sum(N):
    # Convert N to string to iterate over its digits
    N_str = str(N)
    
    # Initialize max_sum to 0
    max_sum = 0
    
    # Iterate over each digit in N
    for digit in N_str:
        # Convert digit back to integer
        digit_int = int(digit)
        
        # Add digit to max_sum
        max_sum += digit_int
    
    # Print the maximum possible sum of the digits
    print(max_sum)


# Read N from input
N = int(sys.stdin.readline().strip())

# Call max_digit_sum function with input N
max_digit_sum(N)