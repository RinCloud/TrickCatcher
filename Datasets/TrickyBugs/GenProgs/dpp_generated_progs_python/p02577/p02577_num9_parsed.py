def is_multiple_of_9(N):
    # Convert N to string
    num_str = str(N)
    
    # Calculate sum of digits
    digit_sum = sum(int(digit) for digit in num_str)
    
    # Check if sum is a multiple of 9
    if digit_sum % 9 == 0:
        return 'Yes'
    else:
        return 'No'

# Read input from standard input
N = int(input())

# Call the function and print the result
print(is_multiple_of_9(N))
