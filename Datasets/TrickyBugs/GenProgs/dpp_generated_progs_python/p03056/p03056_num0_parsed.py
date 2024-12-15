# Please use the program below to solve the problem

import numpy as np

def find_complexity(grid):
    # Convert grid to numpy array for easier manipulation
    grid = np.array(grid)
    
    # Check if all squares are black or all squares are white
    if np.all(grid == '#') or np.all(grid == '.'):
        return 0
    
    # Divide the grid into two subgrids by a line parallel to one of the sides of the grid
    max_complexity = 0
    
    # Divide by rows
    for i in range(1, len(grid)):
        subgrid1 = grid[:i, :]
        subgrid2 = grid[i:, :]
        c1 = find_complexity(subgrid1)
        c2 = find_complexity(subgrid2)
        max_complexity = max(max_complexity, max(c1, c2))
    
    # Divide by columns
    for j in range(1, len(grid[0])):
        subgrid1 = grid[:, :j]
        subgrid2 = grid[:, j:]
        c1 = find_complexity(subgrid1)
        c2 = find_complexity(subgrid2)
        max_complexity = max(max_complexity, max(c1, c2))
    
    return max_complexity + 1

# Read input
H, W = map(int, input().split())
grid = [list(input()) for _ in range(H)]

# Find complexity of the grid
complexity = find_complexity(grid)

# Print output
print(complexity)