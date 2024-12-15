'''
# Function to calculate minimum number of operations required to withdraw N yen
def min_withdraw_operations(N):
    # Initialize count variable to keep track of operations
    count = 0
    
    # While N is greater than 0
    while N > 0:
        # Check if N is divisible by 9
        if N % 9 == 0:
            # Subtract N by largest divisible 9^n power of 9
            N -= pow(9, int(math.log(N, 9)))
        # If N is not divisible by 9, check if N is divisible by 6
        elif N % 6 == 0:
            # Subtract N by largest divisible 6^n power of 6
            N -= pow(6, int(math.log(N, 6)))
        # If N is not divisible by 9 or 6, subtract N by 1
        else:
            N -= 1
        # Increment count
        count += 1
    
    # Return the minimum number of operations required
    return count

# Read the input N
N = int(input())

# Import math module
import math

# Calculate and print minimum number of operations required to withdraw N yen
print(min_withdraw_operations(N))
'''

# Function to calculate minimum number of operations required to withdraw N yen
def min_withdraw_operations(N):
    # Initialize count variable to keep track of operations
    count = 0
    
    # While N is greater than 0
    while N > 0:
        # Check if N is divisible by 9
        if N % 9 == 0:
            # Subtract N by largest divisible 9^n power of 9
            N -= pow(9, int(math.log(N, 9)))
        # If N is not divisible by 9, check if N is divisible by 6
        elif N % 6 == 0:
            # Subtract N by largest divisible 6^n power of 6
            N -= pow(6, int(math.log(N, 6)))
        # If N is not divisible by 9 or 6, subtract N by 1
        else:
            N -= 1
        # Increment count
        count += 1
    
    # Return the minimum number of operations required
    return count

# Read the input N
N = int(input())

# Import math module
import math

# Calculate and print minimum number of operations required to withdraw N yen
print(min_withdraw_operations(N))