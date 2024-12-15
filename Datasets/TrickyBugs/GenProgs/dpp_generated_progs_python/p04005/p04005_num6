import math

def minimum_difference(a, b, c):
    min_diff = math.inf
    
    # Check all possible dimensions for the red parallelepiped
    for i in range(1, a+1):
        for j in range(1, b+1):
            for k in range(1, c+1):
                # Calculate the number of red and blue blocks for this configuration
                num_red = i * j * k
                num_blue = (a - i + 1) * (b - j + 1) * (c - k + 1)
                
                # Update the minimum difference if necessary
                min_diff = min(min_diff, abs(num_red - num_blue))
    
    return min_diff

# Read input from Standard Input
a, b, c = map(int, input().split())

# Calculate and print the minimum difference
print(minimum_difference(a, b, c))