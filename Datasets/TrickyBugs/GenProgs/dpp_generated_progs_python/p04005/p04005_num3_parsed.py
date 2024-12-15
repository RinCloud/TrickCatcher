import math

def minimum_difference(A, B, C):
    # Calculate the volume of the parallelepiped
    volume = A * B * C
    
    # Check if the volume is even or odd
    is_even = volume % 2 == 0
    
    # Calculate the minimum difference based on whether the volume is even or odd
    if is_even:
        min_difference = 0
    else:
        min_difference = min(A * B, B * C, C * A)
    
    return min_difference

# Read the input values
A, B, C = map(int, input().split())

# Calculate and print the minimum difference
print(minimum_difference(A, B, C))