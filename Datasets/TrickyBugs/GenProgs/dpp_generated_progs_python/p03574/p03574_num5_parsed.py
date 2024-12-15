# Parsing input
H, W = map(int, input().split())
grid = [input() for _ in range(H)]

# Defining neighbor directions
directions = [
    (-1, -1), (-1, 0), (-1, 1),
    (0, -1),           (0, 1),
    (1, -1),  (1, 0),  (1, 1)
]

# Function to count bombs in adjacent squares
def count_bombs(row, col):
    count = 0
    for dr, dc in directions:
        nr, nc = row + dr, col + dc
        if 0 <= nr < H and 0 <= nc < W and grid[nr][nc] == '#':
            count += 1
    return count

# Replacing '.' with bomb counts
result = []
for row in range(H):
    new_row = ""
    for col in range(W):
        if grid[row][col] == '.':
            bomb_count = count_bombs(row, col)
            new_row += str(bomb_count)
        else:
            new_row += grid[row][col]
    result.append(new_row)

# Printing the result
for row in result:
    print(row)