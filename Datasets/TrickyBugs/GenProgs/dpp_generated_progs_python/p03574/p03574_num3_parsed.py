import sys

# Read input
H, W = map(int, sys.stdin.readline().split())
grid = []
for _ in range(H):
    row = sys.stdin.readline().rstrip()
    grid.append(row)

# Function to count bombs adjacent to a square
def count_adjacent_bombs(grid, i, j):
    count = 0
    for dx in [-1, 0, 1]:
        for dy in [-1, 0, 1]:
            ni, nj = i + dx, j + dy
            if 0 <= ni < H and 0 <= nj < W and grid[ni][nj] == '#':
                count += 1
    return count

# Process the grid
result = []
for i in range(H):
    row = ''
    for j in range(W):
        if grid[i][j] == '.':
            count = count_adjacent_bombs(grid, i, j)
            row += str(count)
        else:
            row += '#'
    result.append(row)

# Print the result
for row in result:
    print(row)