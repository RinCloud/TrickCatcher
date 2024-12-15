def max_fill(grid, capacity):
    num_buckets = 0
    for row in grid:
        count = sum(row)
        if count <= capacity:
            num_buckets += 1
        else:
            num_buckets += count // capacity
            if count % capacity != 0:
                num_buckets += 1
    return num_buckets