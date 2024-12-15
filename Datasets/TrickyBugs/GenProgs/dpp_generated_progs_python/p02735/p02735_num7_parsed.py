import sys

# Read the input from standard input
H, W = map(int, sys.stdin.readline().split())
grid = [list(sys.stdin.readline().strip()) for _ in range(H)]

# Initialize the count of operations needed to 0
operations = 0

# Check if the starting and ending cells are already white
if grid[0][0] != '.' or grid[H-1][W-1] != '.':
    operations += 1

# Iterate over all cells and count the number of black cells
black_count = 0
for row in grid:
    black_count += row.count('#')

# If the starting and ending cells are black, no operations are needed
if black_count == 0:
    operations = 0
# If all the cells are black, only 1 operation is needed to make them all white
elif black_count == H * W:
    operations = 1
# If there are black cells, traverse the grid to find the minimum number of operations needed
else:
    stack = [(0, 0)]
    visited = [[False] * W for _ in range(H)]

    while stack:
        current_row, current_col = stack.pop()
        visited[current_row][current_col] = True

        if current_row + 1 < H and not visited[current_row + 1][current_col] and grid[current_row + 1][current_col] == '.':
            stack.append((current_row + 1, current_col))
        if current_col + 1 < W and not visited[current_row][current_col + 1] and grid[current_row][current_col + 1] == '.':
            stack.append((current_row, current_col + 1))

    if visited[H - 1][W - 1]:
        operations = 1

# Print the minimum number of operations needed
print(operations)
