from collections import defaultdict

def dfs(grid, visited, i, j):
    visited.add((i, j))
    
    # Check neighboring squares
    for di, dj in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
        ni, nj = i + di, j + dj
        if 0 <= ni < len(grid) and 0 <= nj < len(grid[0]) and (ni, nj) not in visited and grid[ni][nj] == '#':
            dfs(grid, visited, ni, nj)

def can_achieve_objective(grid):
    visited = set()
    
    # Iterate through each square
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == '#' and (i, j) not in visited:
                dfs(grid, visited, i, j)
    
    # Check if all squares with '#' are visited
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == '#' and (i, j) not in visited:
                return 'No'
    
    return 'Yes'

# Read the input
H, W = map(int, input().split())
grid = [input() for _ in range(H)]

# Check if square1001 can achieve his objective
result = can_achieve_objective(grid)

# Print the result
print(result)