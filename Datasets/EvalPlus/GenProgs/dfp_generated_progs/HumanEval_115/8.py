def max_fill(grid, capacity):
    count = 0
    for row in grid:
        bucket = 0
        for well in row:
            if well + bucket <= capacity:
                bucket += well
            else:
                count += 1
                bucket = well
        if bucket > 0:
            count += 1
    return count