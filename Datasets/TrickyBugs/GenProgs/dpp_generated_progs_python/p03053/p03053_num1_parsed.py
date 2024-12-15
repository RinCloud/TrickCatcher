# Program to find the number of operations to turn all white squares into black squares

# Function to check if a given coordinate is within the bounds of the grid
def is_valid(x, y, h, w):
    return x >= 0 and x < h and y >= 0 and y < w

# Function to perform the operation
def perform_operation(grid, h, w):
    # Initialize a list to store the coordinates of white squares that will become black
    white_to_black = []
    
    # Iterate over each square in the grid
    for i in range(h):
        for j in range(w):
            # If the current square is black, continue to the next square
            if grid[i][j] == '#':
                continue
            
            # Initialize a variable to represent the number of adjacent black squares
            black_count = 0
            
            # Check each adjacent square
            for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                nx, ny = i + dx, j + dy
                if is_valid(nx, ny, h, w) and grid[nx][ny] == '#':
                    black_count += 1
            
            # If there is at least one adjacent black square, add the current square to the list
            if black_count > 0:
                white_to_black.append((i, j))
    
    # Turn all the white squares in the list into black squares
    for x, y in white_to_black:
        grid[x][y] = '#'
    
    # Return the number of operations performed
    return len(white_to_black)

# Read the input values
h, w = map(int, input().split())

# Initialize the grid
grid = []
for _ in range(h):
    grid.append(list(input()))

# Initialize a variable to store the number of operations performed
operations = 0

# Perform the operations until all the squares are black
while True:
    count = perform_operation(grid, h, w)
    
    # If no white squares were turned into black squares, break the loop
    if count == 0:
        break
    
    operations += count

# Print the number of operations performed
print(operations)