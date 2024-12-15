import math

def calculate_max_sum(N):
    # Generate the permutation of {1, 2, ..., N}
    permutation = list(range(1, N+1))
    
    # Calculate the maximum possible value of M_1 + M_2 + ... + M_N
    max_sum = 0
    for i in range(1, N+1):
        remainder = i % permutation[i-1]
        max_sum += remainder
    
    return max_sum

# Read the input N
N = int(input())

# Calculate and print the maximum possible value of M_1 + M_2 + ... + M_N
print(calculate_max_sum(N))