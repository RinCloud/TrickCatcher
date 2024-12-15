import math

# Get inputs
N, K = map(int, input().split())

# Calculate the minimum possible difference
min_diff = N % K

# Print the result
print(min_diff)