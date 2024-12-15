def max_fill(grid, capacity):
    num_buckets = 0
    for row in grid: # for each row in the grid
        for well in row: # for each well in the row
            if well > capacity: # if the well has more water than the bucket capacity
                buckets_needed = well // capacity # find the number of buckets needed
                if well % capacity != 0: # if there is a remainder
                    buckets_needed += 1 # add one additional bucket
                num_buckets += buckets_needed # add the number of buckets needed to the total count
    return num_buckets