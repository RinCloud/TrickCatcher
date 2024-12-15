def max_fill(grid, capacity):
    num_buckets = 0
    for row in grid:
        for well in row:
            if well == 1:
                num_buckets += (well // capacity)
    return num_buckets