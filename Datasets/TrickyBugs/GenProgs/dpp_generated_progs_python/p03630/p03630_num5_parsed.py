# PLAN
- Since the grid is small, I can simply brute force by trying out all possible rectangles and find the maximum area.
- For each rectangle, I will count the number of black squares and compare it with the maximum area found so far.
- To optimize the process, I can calculate the count of black squares for each row and each column beforehand.
- Then, I can iterate over all possible pairs of rows and columns to form a rectangle.