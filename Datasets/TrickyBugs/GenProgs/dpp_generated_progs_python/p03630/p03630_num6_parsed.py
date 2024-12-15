H, W = map(int, input().split())

# Read the grid
grid = []
for _ in range(H):
    grid.append(list(input()))

# Initialize variables for counting black squares in each row and column
row_black_count = [0] * H
column_black_count = [0] * W

# Count the number of black squares in each row and column
for i in range(H):
    for j in range(W):
        if grid[i][j] == '#':
            row_black_count[i] += 1
            column_black_count[j] += 1

# Iterate over all possible rectangle positions and calculate the maximum area
max_area = 0
for i in range(H):
    for j in range(W):
        if grid[i][j] == '.':
            area = row_black_count[i] + column_black_count[j] - 1
            max_area = max(max_area, area)

# Print the maximum area
print(max_area)
