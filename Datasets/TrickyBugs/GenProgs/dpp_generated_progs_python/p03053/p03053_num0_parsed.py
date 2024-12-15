def count_operations(h, w, grid):
    # Initialize counter for operations
    operations = 0
    
    # Helper function to check if a position is inside the grid
    def is_inside_grid(i, j):
        return 0 <= i < h and 0 <= j < w
    
    # Helper function to check if a square is white and has a black neighbor
    def is_white_with_black_neighbor(i, j):
        if grid[i][j] != '.':
            return False
        for di, dj in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            ni, nj = i + di, j + dj
            if is_inside_grid(ni, nj) and grid[ni][nj] == '#':
                return True
        return False
    
    # Repeat the operation until all squares are black
    while any('.' in row for row in grid):
        # Create a copy of the grid for the next operation
        next_grid = [list(row) for row in grid]
        
        # Perform the operation on each white square with a black neighbor
        for i in range(h):
            for j in range(w):
                if is_white_with_black_neighbor(i, j):
                    next_grid[i][j] = '#'
        
        # Update the grid for the next operation
        grid = next_grid
        
        # Increment the counter for operations
        operations += 1
    
    return operations

# Read input
h, w = map(int, input().split())
grid = [input() for _ in range(h)]

# Count operations
result = count_operations(h, w, grid)

# Print result
print(result)
