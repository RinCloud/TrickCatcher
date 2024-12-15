# Program

H, W = map(int, input().split())
grid = []
for _ in range(H):
    grid.append(input())

# Function to check if a cell is white and has a neighboring black cell
def has_white_neighboring_black(i, j):
    if grid[i][j] == '#':
        return False
    if i > 0 and grid[i-1][j] == '#':
        return True
    if i < H-1 and grid[i+1][j] == '#':
        return True
    if j > 0 and grid[i][j-1] == '#':
        return True
    if j < W-1 and grid[i][j+1] == '#':
        return True
    return False

# Main loop
operations = 0
while True:
    next_grid = []
    for i in range(H):
        row = []
        for j in range(W):
            if has_white_neighboring_black(i, j):
                row.append('#')
            else:
                row.append(grid[i][j])
        next_grid.append(row)
    if next_grid == grid:
        break
    grid = next_grid
    operations += 1

print(operations)