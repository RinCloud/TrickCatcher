def max_fill(grid, capacity):
    count = 0
    for row in grid:
        for well in row:
            if well > capacity:
                count += 1
    return count