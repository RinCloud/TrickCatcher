import math

# Read input values
N = int(input())
coordinates = list(map(int, input().split()))

# Find the midpoint with minimum total stamina
midpoint = sum(coordinates) // N

# Calculate total stamina
total_stamina = sum([(x - midpoint)**2 for x in coordinates])

# Print the minimum total stamina
print(total_stamina)