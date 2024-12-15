import math

def calculate_dodecagon_area(r):
    area = 3 * r * r
    return area

# Read the input
r = int(input())

# Calculate the area of the regular dodecagon
dodecagon_area = calculate_dodecagon_area(r)

# Print the area of the regular dodecagon
print(dodecagon_area)