import math

def calculate_dodecagon_area(r):
    area = 3*(r**2)
    return area

# Read input from standard input
r = int(input())

# Calculate the area of the regular dodecagon
result = calculate_dodecagon_area(r)

# Print the result
print(result)