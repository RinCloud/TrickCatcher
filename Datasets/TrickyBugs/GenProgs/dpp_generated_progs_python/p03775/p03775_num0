import math

def find_minimum_digits(N):
    minimum_digits = math.inf
    
    # Find all pairs (A, B) such that N = A * B
    for A in range(1, math.isqrt(N) + 1):
        if N % A == 0:
            B = N // A
            
            # Calculate the digits in A and B
            digits_A = len(str(A))
            digits_B = len(str(B))
            
            # Update the minimum digits if necessary
            minimum_digits = min(minimum_digits, max(digits_A, digits_B))
    
    return minimum_digits

# Read the input
N = int(input())

# Find the minimum digits
minimum_digits = find_minimum_digits(N)

# Print the result
print(minimum_digits)