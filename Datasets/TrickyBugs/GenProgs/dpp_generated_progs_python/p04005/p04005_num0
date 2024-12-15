import math

A, B, C = map(int, input().split())

# Calculate the minimum difference between A and B
min_diff = min(abs(A - B), abs(B - C), abs(A - C))

# Calculate the minimum possible difference between the number of red blocks and the number of blue blocks
min_diff = max(min_diff - 1, 0)

# Calculate the total number of blocks
total_blocks = A * B * C

# Calculate the maximum possible difference between the number of red blocks and the number of blue blocks
max_diff = math.ceil(total_blocks / 2) - 1

# Calculate the final minimum possible difference
min_possible_diff = min(min_diff, max_diff)

print(min_possible_diff)