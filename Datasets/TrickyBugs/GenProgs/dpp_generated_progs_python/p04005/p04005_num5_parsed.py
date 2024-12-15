import math

def min_difference(a, b, c):
    # Calculate the volume of the rectangular parallelepiped
    volume = a * b * c

    # Find the divisors of the volume
    divisors = []
    for i in range(1, math.isqrt(volume) + 1):
        if volume % i == 0:
            divisors.append(i)
            if i != volume // i:
                divisors.append(volume // i)

    # Initialize the minimum difference with a large value
    min_diff = float('inf')

    # Iterate through each divisor
    for divisor in divisors:
        # Find the possible dimensions of the rectangular parallelepiped
        dimensions = [divisor, volume // divisor, 1]

        # Sort the dimensions in ascending order
        dimensions.sort()

        # Calculate the difference between the number of red and blue blocks
        diff = dimensions[2] - dimensions[0]

        # Update the minimum difference if necessary
        min_diff = min(min_diff, diff)

    # Return the minimum difference
    return min_diff

# Read the input values
a, b, c = map(int, input().split())

# Compute the minimum difference
result = min_difference(a, b, c)

# Print the result
print(result)