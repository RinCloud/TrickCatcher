# Given input reading and processing
h, w = [int(x) for x in input().split()]
grid = [input() for _ in range(h)]

# Initialize result grid
result = [['0'] * w for _ in range(h)]

# Define adjacency directions: top-left, top, top-right, left, right, bottom-left, bottom, bottom-right
dx = [-1, 0, 1, -1, 1, -1, 0, 1]
dy = [-1, -1, -1, 0, 0, 1, 1, 1]

# Iterate over grid
for i in range(h):
    for j in range(w):
        # Skip if the square is already bomb
        if grid[i][j] == '#':
            result[i][j] = '#'
        else:
            # Count the number of adjacent bomb squares
            count = 0
            for d in range(8):
                ni = i + dx[d]
                nj = j + dy[d]
                if 0 <= ni < h and 0 <= nj < w and grid[ni][nj] == '#':
                    count += 1

            # Store the count in result grid
            result[i][j] = str(count)

# Print the result
for row in result:
    print(''.join(row))