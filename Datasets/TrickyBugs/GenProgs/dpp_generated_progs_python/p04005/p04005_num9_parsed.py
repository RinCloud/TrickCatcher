import math

# Function to calculate the minimum possible difference
def minimum_difference(a, b, c):
    # Maximum number of red blocks that can be painted
    max_red = math.ceil(a/2) * math.ceil(b/2) * math.ceil(c/2)
    
    # Maximum number of blue blocks that can be painted
    max_blue = math.floor(a/2) * math.floor(b/2) * math.floor(c/2)
    
    # Calculate the minimum difference
    minimum_diff = abs(max_red - max_blue) * 8
    
    return minimum_diff

# Read the input values
a, b, c = map(int, input().split())

# Calculate the minimum possible difference
result = minimum_difference(a, b, c)

# Print the result
print(result)