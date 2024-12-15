# Approach:

We can solve this problem using a greedy approach.

We start with the whole chocolate bar as a single block. We iterate row by row, and at each row, we count the number of white squares in that row. If the total number of white squares in the current block plus the number of white squares in the current row exceeds K, then we cut the bar just above the current row, creating a new block. We continue this process until we reach the end of the rows.

Finally, we count the number of blocks created, which gives us the minimum number of cuts required.

# Plan:

1. Read the input values for H, W, and K.
2. Read the chocolate bar state S.
3. Set the initial number of cuts to 0.
4. Set the initial block count to 1.
5. Iterate over each row from top to bottom:
   - Count the number of white squares in the current row.
   - If the total number of white squares in the current block plus the number of white squares in the current row exceeds K:
     - Increment the number of cuts by 1.
     - Reset the total number of white squares in the current block to 0.
     - Increment the block count by 1.
   - Add the number of white squares in the current row to the total number of white squares in the current block.
6. Print the number of cuts.