import math

def gcd_of_sequence(N, M):
    # Find the largest possible value for the greatest common divisor
    max_gcd = min(N, M)
    
    # Find the largest divisor of M that is less than or equal to N
    for i in range(max_gcd, 0, -1):
        if M % i == 0:
            return i
    
    return 1

# Get the input values of N and M
N, M = map(int, input().split())

# Find the maximum possible value of the greatest common divisor
max_gcd = gcd_of_sequence(N, M)

# Print the result
print(max_gcd)