def max_fill(grid, capacity):
    n = len(grid)
    m = len(grid[0])
    total_buckets = (sum([sum(row) for row in grid]) + capacity - 1) // capacity
    return total_buckets