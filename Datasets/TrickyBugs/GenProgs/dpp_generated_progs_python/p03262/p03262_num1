# Plan
- Sort the cities' coordinates in ascending order.
- Calculate the differences between consecutive coordinates.
- Find the greatest common divisor (GCD) of all the differences.
- The GCD will be the maximum value of D that enables you to visit all the cities.

# Program:

import math

# Read input
N, X = map(int, input().split())
cities = list(map(int, input().split()))

# Sort cities' coordinates in ascending order
cities.sort()

# Calculate the differences between consecutive coordinates
diffs = [cities[i] - cities[i-1] for i in range(1, N)]

# Find the GCD of all the differences
gcd = diffs[0]
for diff in diffs:
    gcd = math.gcd(gcd, diff)

# Output the maximum value of D
print(gcd)