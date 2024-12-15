# Python program to find the maximum number of targets that can be destroyed

# Read the input values
H, W, M = map(int, input().split())

# Initialize lists to store the count of targets in each row and column
row_counts = [0] * H
col_counts = [0] * W

# Iterate over the targets and update the row and column count
for _ in range(M):
    r, c = map(int, input().split())
    row_counts[r-1] += 1
    col_counts[c-1] += 1

# Find the maximum count in rows and columns
max_row_count = max(row_counts)
max_col_count = max(col_counts)

# Find the rows and columns with the maximum count
max_row_indices = [i for i, count in enumerate(row_counts) if count == max_row_count]
max_col_indices = [i for i, count in enumerate(col_counts) if count == max_col_count]

# If there is a target in any row or column with the maximum count,
# then we can destroy all targets in that row or column by placing
# the bomb in that square.
# Otherwise, we can destroy all targets in both a row and column simultaneously
# by placing the bomb in a square without a target (as long as all targets are not in
# the same row or column).
# Hence, the maximum number of targets that can be destroyed is the sum of the
# maximum count and one (since we need to count the bomb square as well).
max_targets = max(max_row_count + (1 if max_row_indices else 0),
                  max_col_count + (1 if max_col_indices else 0))

# Print the answer
print(max_targets)