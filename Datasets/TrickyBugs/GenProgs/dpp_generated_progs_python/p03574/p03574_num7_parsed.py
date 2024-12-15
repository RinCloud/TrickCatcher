# read input
H, W = map(int, input().split())
grid = [input() for _ in range(H)]

# define the directions to check for adjacent squares
directions = [(0, 1), (0, -1), (1, 0), (-1, 0), (1, 1), (-1, -1), (1, -1), (-1, 1)]

# iterate over each square in the grid
for i in range(H):
    for j in range(W):
        # skip if the square contains a bomb
        if grid[i][j] == '#':
            continue
        
        # count the number of adjacent bomb squares
        count = 0
        for dx, dy in directions:
            ni, nj = i + dx, j + dy
            # check if adjacent square is within the grid
            if ni >= 0 and ni < H and nj >= 0 and nj < W:
                if grid[ni][nj] == '#':
                    count += 1
        
        # replace the empty square with the count
        grid[i] = grid[i][:j] + str(count) + grid[i][j+1:]

# print the grid
for row in grid:
    print(row)
