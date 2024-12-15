import sys

def find_nearest_integer(X, N, p):
    # Create a set of integers in the sequence p
    p_set = set(p)
    
    # Initialize the minimum difference to a large value
    min_diff = sys.maxsize
    
    # Initialize the nearest integer to X
    nearest_integer = X
    
    # Iterate over all possible integers not in the sequence p
    for i in range(1, 101): # range from 1 to 100 (inclusive)
        if i not in p_set:
            # Calculate the absolute difference between X and the current integer
            diff = abs(X - i)
            
            # If the current difference is smaller than the minimum difference, update the nearest integer and minimum difference
            if diff < min_diff:
                nearest_integer = i
                min_diff = diff
            # If the current difference is equal to the minimum difference, update the nearest integer only if the current integer is smaller
            elif diff == min_diff and i < nearest_integer:
                nearest_integer = i
    
    return nearest_integer

# Read the input from Standard Input
X, N = map(int, input().split())
p = list(map(int, input().split()))

# Call the function to find the nearest integer
nearest_integer = find_nearest_integer(X, N, p)

# Print the answer
print(nearest_integer)