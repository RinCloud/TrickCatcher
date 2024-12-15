from typing import List
def max_fill(grid: List[List[int]], capacity: int) -> int:
    # Initializing variables
    num_buckets = 0
    num_rows = len(grid)
    num_cols = len(grid[0])
    
    # Traverse the grid to count the number of buckets needed
    for i in range(num_rows):
        for j in range(num_cols):
            if grid[i][j] == 1:
                num_buckets += 1
    
    # Calculate the number of times the buckets need to be lowered
    num_times_lowered = num_buckets // capacity
    if num_buckets % capacity != 0:
        num_times_lowered += 1
    
    return num_times_lowered