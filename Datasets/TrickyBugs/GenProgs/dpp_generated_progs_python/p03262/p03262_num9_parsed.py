# The maximum value of D that enables visiting all the cities is the greatest common divisor (gcd) of the absolute differences between each city coordinate and the starting coordinate.

import math

def find_max_d(n, x, city_coordinates):
    max_d = abs(x - city_coordinates[0])
    for i in range(1, n):
        max_d = math.gcd(max_d, abs(x - city_coordinates[i]))
    return max_d

# Read input
n, x = map(int, input().split())
city_coordinates = list(map(int, input().split()))

# Call the function and print the result
print(find_max_d(n, x, city_coordinates))