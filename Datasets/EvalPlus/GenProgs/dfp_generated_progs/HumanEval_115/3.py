def max_fill(grid, capacity):
    wells = sum(sum(row) for row in grid)
    buckets = 0
    while wells > 0:
        wells -= capacity
        buckets += 1
    return buckets