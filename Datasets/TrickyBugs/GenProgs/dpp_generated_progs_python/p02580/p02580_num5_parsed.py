"""
# Get the input values
H, W, M = map(int, input().split())

# Initialize a 2D array to store the number of targets in each row and column
row_count = [0] * H
col_count = [0] * W

# Initialize a set to store the positions of all the targets
targets = set()

# Iterate through each target
for _ in range(M):
    h, w = map(int, input().split())
    h -= 1  # Subtract 1 to convert the 1-based index to 0-based index
    w -= 1
    # Increment the count of targets in the respective row and column
    row_count[h] += 1
    col_count[w] += 1
    # Add the target position to the set
    targets.add((h, w))

# Find the maximum number of targets that can be destroyed
max_destroyed = max(row_count) + max(col_count)

# Check if any of the target positions have the maximum number of destroyed targets
for h, w in targets:
    # If the number of targets in the respective row or column is equal to the maximum, subtract 1
    if row_count[h] + col_count[w] == max_destroyed:
        max_destroyed -= 1

# Print the answer
print(max_destroyed)
"""