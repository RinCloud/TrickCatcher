from math import sqrt

# Function to check if a number is prime
def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

# Function to count the maximum number of times the operation can be applied
def count_operations(N):
    # Initialize count to 0
    count = 0
    # Iterate from 2 to the square root of N
    for i in range(2, int(sqrt(N)) + 1):
        # If i is a prime number and divides N
        if is_prime(i) and N % i == 0:
            # Increment count
            count += 1
            # Divide N by i until it is no longer divisible
            while N % i == 0:
                N //= i
    # If N is greater than 1, it is a prime number
    if N > 1:
        count += 1
    # Return the maximum number of times the operation can be applied
    return count

# Read the input value of N
N = int(input())

# Call the function to count the maximum number of times the operation can be applied
max_operations = count_operations(N)

# Print the result
print(max_operations)