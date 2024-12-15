def max_fill(grid, bucket_capacity):
    import math
    n, m = len(grid), len(grid[0])
    height = sum(grid[i][j] for i in range(n) for j in range(m))
    if height == 0:
        return 0
    elif height <= bucket_capacity * n:
        return n
    else:
        return int(math.ceil(height / bucket_capacity))