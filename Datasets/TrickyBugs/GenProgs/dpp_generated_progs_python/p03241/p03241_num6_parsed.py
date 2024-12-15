import math

def find_gcd(N, M):
    gcd = math.gcd(N, M)
    return gcd

# Read input values
N, M = map(int, input().split())

# Calculate maximum possible greatest common divisor
max_gcd = find_gcd(N, M)

# Print the result
print(max_gcd)