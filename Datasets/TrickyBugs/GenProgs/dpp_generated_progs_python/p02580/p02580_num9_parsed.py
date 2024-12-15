# Let's approach this problem using a greedy strategy.

# We will first initialize two arrays, row_count and col_count, both of length H and W respectively. 
# These arrays will store the count of targets in each row and each column, respectively.

# For each target, we will increment the corresponding row_count and col_count values.

# Then, we will find the maximum value in row_count and col_count. Let's call these max_row and max_col respectively.

# The maximum number of targets we can destroy is max_row + max_col - 1.