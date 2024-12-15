# Approach:

To maximize the number of squares lighted by the lamp, we need to find the maximum number of squares in the up, down, left, and right directions for each square that is not occupied by an obstacle.

We can achieve this by iterating through each square and counting the number of consecutive empty squares in each direction until an obstacle or the border of the grid is reached.

# Steps:
1. Read the values of H and W from input.
2. Read the grid of obstacles from input.
3. Initialize a 2D array `up`, `down`, `left`, and `right` each of size HxW with zeroes.
4. Iterate through each row and column of the grid:
   - If the current square is not occupied by an obstacle:
     - Initialize temporary variables count_up, count_down, count_left, and count_right to zero.
     - Iterate upwards from the current square and increment count_up until an obstacle or the border of the grid is reached.
     - Iterate downwards from the current square and increment count_down until an obstacle or the border of the grid is reached.
     - Iterate towards the left from the current square and increment count_left until an obstacle or the border of the grid is reached.
     - Iterate towards the right from the current square and increment count_right until an obstacle or the border of the grid is reached.
     - Update the corresponding elements in the `up`, `down`, `left`, and `right` arrays with the maximum counts.
5. Iterate through each row and column of the grid:
   - If the current square is not occupied by an obstacle, calculate the total number of squares lighted by the lamp by summing the corresponding elements in the `up`, `down`, `left`, and `right` arrays and subtracting 3 (to exclude the current square counted four times).
   - Update a variable `max_lighted` with the maximum number of squares lighted by the lamp.
6. Print the value of `max_lighted`.