def is_multiple_of_9(N):
    # Calculate the sum of the digits in N
    digit_sum = sum([int(digit) for digit in str(N)])
    
    # Check if the digit sum is a multiple of 9
    if digit_sum % 9 == 0:
        return True
    else:
        return False

# Read the input value N
N = int(input())

# Check if N is a multiple of 9
if is_multiple_of_9(N):
    print('Yes')
else:
    print('No')
