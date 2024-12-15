# Importing math module to use the power function
import math

# Function to calculate minimum operations required to withdraw N yen
def minimum_operations(N):
    # Initializing the operations counter
    operations = 0
    
    # Looping until N becomes 0
    while N > 0:
        # Checking if N is divisible by 9
        if N % 9 == 0:
            # Counting the division as one operation
            operations += 1
            # Dividing N by 9
            N = N // 9
        else:
            # Finding the highest power of 6 less than or equal to N
            power = int(math.log(N, 6))
            # Counting the power as one operation
            operations += 1
            # Subtracting the power of 6 from N
            N -= math.pow(6, power)
    
    # Returning the minimum operations required
    return operations

# Reading the input value of N
N = int(input())

# Calculating and printing the minimum operations required to withdraw N yen
print(minimum_operations(N))