def is_symmetric(H, W, grid):

    # Check if the grid is already symmetric
    for i in range(H//2):
        for j in range(W):
            if grid[i][j] != grid[H-1-i][W-1-j]:
                return "NO"
    
    return "YES"

# Read the input
H, W = map(int, input().split())
grid = [input() for _ in range(H)]

# Check if the grid can be made symmetric
result = is_symmetric(H, W, grid)
print(result)