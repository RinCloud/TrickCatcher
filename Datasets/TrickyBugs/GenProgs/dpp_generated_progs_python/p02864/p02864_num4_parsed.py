#Program:

import sys


def min_operations(N, K, heights):
    # Initialize the number of operations
    operations = 0
    
    # If there are no columns, return 0
    if K == 0:
        return operations
    
    # If N is smaller than K, set N as K to avoid index errors
    if N < K:
        K = N
    
    # Sort the columns in descending order of heights
    sorted_columns = sorted(range(len(heights)), key=lambda k: heights[k], reverse=True)
    
    # Iterate through K columns
    for i in range(K):
        # Choose the current column
        column = sorted_columns[i]
        
        # Add the height of the current column to the total operations
        operations += heights[column]
        
        # Decrement K
        K -= 1
        
        # If there are no more columns, return the total operations
        if K == 0:
            return operations
    
    # Return the total operations
    return operations


# Read the input from standard input
input_lines = sys.stdin.readlines()

# Parse the input
N, K = map(int, input_lines[0].split())
heights = list(map(int, input_lines[1].split()))

# Calculate the minimum number of operations
result = min_operations(N, K, heights)

# Print the minimum number of operations
print(result)