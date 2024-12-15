def max_fill(grid, capacity):
    total_wells = len(grid)
    total_rows = len(grid[0])
    max_fill_count = 0
    
    for row in grid:
        fill_count = 0
        for well in row:
            if well == 1:
                fill_count += 1
        max_fill_count = max(max_fill_count, fill_count)
    
    return max_fill_count * capacity