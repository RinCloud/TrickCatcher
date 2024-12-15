# Implementation of the program

from math import ceil

# Function to find the (X/2)-th lexicographically smallest sequence
def find_lexicographically_smallest(K, N):
    # Calculate the total number of sequences X
    X = (K ** N)
    
    # Calculate the lexicographically smallest sequence
    sequence = []
    for i in range(N):
        count = X // K
        digit = ceil((X / 2) / count)
        sequence.append(digit)
        X -= digit * count
        
    # Return the lexicographically smallest sequence
    return sequence

# Read input values
K, N = map(int, input().split())

# Find the lexicographically smallest sequence
result = find_lexicographically_smallest(K, N)

# Print the lexicographically smallest sequence
print(*result)