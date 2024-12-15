def max_fill(grid, capacity):
    import math
    n, m = len(grid), len(grid[0])
    height = sum(grid[i][j] for i in range(n) for j in range(m))
    
    if height == 0:
        return 0
    elif height <= n * m * capacity:
        return math.ceil(height / capacity)
    else:
        return n * m