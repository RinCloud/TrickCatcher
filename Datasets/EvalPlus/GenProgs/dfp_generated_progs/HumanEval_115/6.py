def max_fill(grid, capacity):
    num_buckets = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                num_buckets += 1
    num_times = num_buckets//capacity
    if num_buckets % capacity != 0:
        num_times += 1
    return num_times