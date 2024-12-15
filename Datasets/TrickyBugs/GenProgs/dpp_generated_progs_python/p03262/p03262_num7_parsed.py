'''
I will first find the maximum distance between any two cities, which will be the upper limit for D.
Then I will calculate the distance between the starting coordinate X and all the cities.
The maximum value of D will be the greatest common divisor (gcd) of all these distances.
'''

import math

# Reading input
N, X = map(int, input().split())
cities = list(map(int, input().split()))

# Determine the upper limit for D
max_distance = max(abs(c - X) for c in cities)

# Finding the gcd of all distances
d = cities[0] if N > 1 else max_distance
for i in range(1, N):
    d = math.gcd(d, abs(cities[i] - X))

# Print the maximum value of D
print(d)
