def max_fill(grid, capacity):
    import math
    
    n, m = len(grid), len(grid[0])
    total_water = sum(grid[i][j] for i in range(n) for j in range(m))
    
    if total_water == 0:
        return 0
    elif total_water <= capacity:
        return n
    else:
        return int(math.ceil(total_water / capacity))