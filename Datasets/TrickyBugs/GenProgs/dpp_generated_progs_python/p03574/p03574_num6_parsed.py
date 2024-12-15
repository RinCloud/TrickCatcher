H, W = map(int, input().split())

grid = []
for _ in range(H):
    grid.append(input())

# Function to check if a given position is within the grid boundaries
def is_valid_position(i, j):
    return i >= 0 and j >= 0 and i < H and j < W

# Function to count the number of bomb squares adjacent to an empty square
def count_adjacent_bombs(i, j):
    count = 0
    for di in [-1, 0, 1]:
        for dj in [-1, 0, 1]:
            if di == 0 and dj == 0:
                continue
            ni = i + di
            nj = j + dj
            if is_valid_position(ni, nj) and grid[ni][nj] == "#":
                count += 1
    return count

result = []
for i in range(H):
    row = ""
    for j in range(W):
        if grid[i][j] == ".":
            row += str(count_adjacent_bombs(i, j))
        else:
            row += "#"
    result.append(row)

print("\n".join(result))
