# Given the city coordinates, we want to find the maximum value of D that enables us to visit all the cities.

# Approach:
# To visit all the cities, we need to find the maximum difference between any two consecutive city coordinates.
# We can iterate through the city coordinates and compute the difference between each consecutive pair.
# The maximum difference will be the maximum value of D.

# Read the input values
N, X = map(int, input().split())
cities = list(map(int, input().split()))

# Calculate the differences between consecutive city coordinates
differences = [abs(X - cities[i]) for i in range(N - 1)]

# Find the maximum difference
max_difference = max(differences)

# Print the maximum value of D
print(max_difference)