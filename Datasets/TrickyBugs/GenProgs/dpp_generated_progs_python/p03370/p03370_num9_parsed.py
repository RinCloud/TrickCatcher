import math

# Read input values
N, X = map(int, input().split())
M = [int(input()) for _ in range(N)]

# Initialize variables
total_doughnuts = N

# Calculate the maximum number of doughnuts that can be made
for m in M:
    total_doughnuts += math.floor((X - sum(M)) / m)

# Print the result
print(total_doughnuts)